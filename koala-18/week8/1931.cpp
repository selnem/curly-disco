#include<iostream>
#include<queue>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    priority_queue< pair<int,int> > q;
    cin>>n;
    int s,e;
    
    for(int i=0;i<n;i++){
        cin>>s>>e;
        q.push(make_pair(-e,-s));
    }
    int cnt=1;
    int start=-q.top().first;
    q.pop();
    while(!q.empty()){
        auto tmp=q.top();
        q.pop();
        if(start<=-tmp.second){
            ++cnt;
            start=-tmp.first;
        }
    }
    cout<<cnt;


    return 0;
}

