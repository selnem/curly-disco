#include<iostream>
#include<algorithm>
using namespace std;

int ans[8];
bool vis[8]={0};
void recur(int*arr,int n,int m,int cnt=0);
int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(arr,n,m);
    delete[]arr;
    return 0;
}

void recur(int*arr,int n,int m,int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(vis[i]){
            continue;
        }
        ans[cnt]=arr[i];
        vis[i]=true;
        recur(arr,n,m,cnt+1);
        vis[i]=false;
    }
    return;

}