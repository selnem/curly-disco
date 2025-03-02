#include<iostream>
using namespace std;
int ans[7];
void recur(int n,int m,int cnt=0);
int main(){
    int n,m;
    cin>>n>>m;
    recur(n,m);
    return 0;
}
void recur(int n,int m,int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        ans[cnt]=i;
        recur(n,m,cnt+1);
    }
    return;
}