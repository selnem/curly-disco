#include<iostream>
#include<queue>
#include<deque>
using namespace std;

struct DOC{
    int name;
    int priority;
};

int q_cnt(int n,int m);

int main(){
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        cout<<q_cnt(n,m)<<'\n';
    }
    return 0;
}
int q_cnt(int n,int m){
    int cnt=0;
    DOC tmp;
    queue<DOC>doc;
    priority_queue<int,vector<int>,less<int> > p;
    for(int i=0;i<n;i++){
        cin>>tmp.priority;
        tmp.name=i;
        doc.push(tmp);
        p.push(tmp.priority);
    }
    while(!p.empty()){
        if(doc.front().priority<p.top()){
            doc.push(doc.front());
            doc.pop();
        }
        else{
            cnt++;
            if(doc.front().name==m){
                break;
            }
            doc.pop();
            p.pop();
        }
    }
    return cnt;
}
