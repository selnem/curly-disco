#include<iostream>
using namespace std;
void recur(int n,int m,int start=1,int cnt=0);
int ans[8];
int main(){
    int n,m;
    cin>>n>>m;
    recur(n,m);
    return 0;
}

void recur(int n,int m,int start,int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=start;i<=n-m+cnt+1;i++){
        ans[cnt]=i;
        recur(n,m,i+1,cnt+1);
    }
}