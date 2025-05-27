#include<iostream>
#include<queue>
#include<vector>
#define MAX_D 10001
using namespace std;


vector< pair<int,int> > hway[MAX_D];
int dis[MAX_D];
const int INF=1<<30;

void dijstra();

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,d;
    cin>>n>>d;
    int s,e,w;
    for(int i=0;i<=d+1;i++){
        hway[i].push_back(make_pair(i+1,1));
    }
    for(int i=0;i<n;i++){
        cin>>s>>e>>w;
        hway[s].push_back(make_pair(e,w));
    }
    for(int i=0;i<=MAX_D;i++){
        dis[i]=INF;
    }
    dijstra();
    cout<<dis[d];
    return 0;
}
void dijstra(){
    priority_queue < pair <int,int> > q;
    q.push(make_pair(0,0));
    dis[0]=0;
    while(!q.empty()){
        int d,n;
        d=-q.top().first;
        n=q.top().second;
        q.pop();
        for(auto&tmp:hway[n]){
            int cost=d+tmp.second;
            if(cost<dis[tmp.first]){
                dis[tmp.first]=cost;
                q.push(make_pair(-cost,tmp.first));
            }
        }
    }
}