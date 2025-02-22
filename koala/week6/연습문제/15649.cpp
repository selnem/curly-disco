#include<iostream>
using namespace std;
void recur(int n,int m,int cnt=0);
bool vis_arr[9]={0};
int ans[8];
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
        if(vis_arr[i]){
            continue;
        }
        ans[cnt]=i;
        vis_arr[i]=true;
        recur(n,m,cnt+1);
        vis_arr[i]=false;
    }
}
