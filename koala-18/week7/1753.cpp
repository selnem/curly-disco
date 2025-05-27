#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector< pair<int,int> >grp[20001];
void dijstra(int start,int *dis);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    int INF=1<<30;

    cin>>n>>m>>k;

    int* dist=new int[n+1];

    for(int i=1;i<=n;i++){
        dist[i]=INF;
    }
    int u,v,w;
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        grp[u].push_back({v,w});
    }
    dijstra(k,dist);

    for(int i=1;i<=n;i++){
        if(dist[i]==INF){
            cout<<"INF"<<'\n';
        }
        else{
            cout<<dist[i]<<'\n';
        }
    }

    delete[] dist;
    return 0;
}
void dijstra(int start,int *dis){
    priority_queue< pair<int,int> > q;
    q.push(make_pair(0,start));
    dis[start]=0;
    while(!q.empty()){
        int d,n;
        d=-q.top().first;
        n=q.top().second;
        q.pop();
        for(auto &tmp:grp[n]){
            int cost=d+tmp.second;
            if(cost<dis[tmp.first]){
                dis[tmp.first]=cost;
                q.push(make_pair(-cost,tmp.first));
            }
        }
    }
}
