#include<iostream>
#include<vector>
#include<queue>

#define MAX_S 300001
using namespace std;

vector<int> mapp[MAX_S];
int dis[MAX_S];
int N,M,K,X;
const int INF=1<<30;
void dijkstra(int x);
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>N>>M>>K>>X;
    for(int i=0;i<M;i++){
        int s,e;
        cin>>s>>e;
        mapp[s].push_back(e);
    }
    for(int i=1;i<=N;i++){
        dis[i]=INF;
    }
    dijkstra(X);
    bool isEmpty=true;
    for(int i=1;i<=N;i++){
        if(dis[i]==K){
            isEmpty=false;
            cout<< i <<endl;
        }
    }
    if(isEmpty){
        cout<<-1;
    }
    
}
void dijkstra(int x){
    dis[x]=0;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int nw=q.front();
        q.pop();
        for(auto &tmp:mapp[nw]){
            
            if(dis[tmp]>dis[nw]+1){
                dis[tmp]=dis[nw]+1;
                q.push(tmp);
            }
        }
    }
}