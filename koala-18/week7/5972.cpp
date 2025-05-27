#include<iostream>
#include<queue>
#include<vector>
#define MAX_S 50001
using namespace std;

vector< pair<int,int> > mapp[MAX_S];
int dis[MAX_S];
const int INF=1<<30;

void dijstra();

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        mapp[a].push_back(make_pair(b,c));
        mapp[b].push_back(make_pair(a,c));
    }
    dijstra();

    cout<<dis[n];

    return 0;
}

void dijstra(){
    priority_queue< pair<int,int> > q;
    q.push(make_pair(0,1));
    dis[1]=0;
    while(!q.empty()){
        int d,n;
        d=-q.top().first;
        n=q.top().second;
        q.pop();
        for(auto &tmp:mapp[n]){
            int cost=d+tmp.second;
            if(cost<dis[tmp.first]){
                dis[tmp.first]=cost;
                q.push(make_pair(-cost,tmp.first));
            }            
        }
    }
}