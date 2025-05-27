#include<queue>
#include<iostream>
#include<vector>
#define MAX_S 1001
using namespace std;

int dis[MAX_S];
vector< pair<int,int> > mapp[MAX_S];
int INF=1<<30;
int n,m;
void dijstra(int start,int end);

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    for(int i=0;i<m;i++){
        int s,e,w;
        cin>>s>>e>>w;
        mapp[s].push_back(make_pair(e,w));
    }
    int start,end;
    cin>>start>>end;
    dijstra(start,end);
    cout<<dis[end];
    return 0;
}
void dijstra(int start,int end){
    priority_queue< pair<int,int> > q;
    q.push(make_pair(0,start));
    dis[start]=0;
    while(!q.empty()){
        int d,nw;
        d=-q.top().first;
        nw=q.top().second;
        q.pop();
        if(dis[nw]<-d){
            continue;
        }
        if(nw==end){
            break;
        }
        for(auto tmp:mapp[nw]){
            int cost=d+tmp.second;
            if(cost<dis[tmp.first]){
                dis[tmp.first]=cost;
                q.push(make_pair(-cost,tmp.first));
            }            
        }
    }
}