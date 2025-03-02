#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    queue<int>que;
    for(int i=1;i<=n;i++){
        que.push(i);
    }
    cout<<'<';
    while(1){
        for(int i=0;i<k-1;i++){
            que.push(que.front());
            que.pop();
        }
        cout<<que.front();
        que.pop();
        if(que.empty()){
            break;
        }
        else{
            cout<<", ";
        }
    }
    cout<<'>';
    return 0;
}