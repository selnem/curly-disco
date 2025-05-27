#include<iostream>
#include<queue>
#include<vector>
#define MAX_S 201
using namespace std;

vector< pair<int,int> > mapp[MAX_S];
int n,m;

const int INF=1<<30;

void dijstra(int start);

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int s,e,w;
        cin>>s>>e>>w;
        mapp[s].push_back(make_pair(e,w));
        mapp[e].push_back(make_pair(s,w));
    }
    for(int i=1;i<=n;i++){
        dijstra(i);
    }
    return 0;
}
void dijstra(int start){
    int dis[MAX_S];
    int path[MAX_S];
    int ans[MAX_S];
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    priority_queue< pair<int,int> >q;
    q.push(make_pair(0,start));
    dis[start]=0;
    while(!q.empty()){
        int d=-q.top().first;
        int nw=q.top().second;
        q.pop();
        for(auto &tmp:mapp[nw]){
            int cost=d+tmp.second;
            if(cost<dis[tmp.first]){
                dis[tmp.first]=cost;
                q.push(make_pair(-cost,tmp.first));
                path[tmp.first]=nw;
            }
            
        }
    }
    for(int i=1;i<=n;i++){
        if(i==start) ans[i]=-1;
        else{
            int t=i;
            while(path[t]!=start){
                t=path[t];
            }
            ans[i]=t;
        }
    }
    for(int i=1;i<=n;i++){
        if(i==start){
            cout<<"- ";
        }
        else{
            cout<<ans[i]<<' ';
        }
    }
    cout<<endl;
}