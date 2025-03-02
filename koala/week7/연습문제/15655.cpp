#include<iostream>
#include<algorithm>
using namespace std;
int ans[8];
void recur(int*arr,int n,int m,int s_idx=0,int cnt=0);
int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(arr,n,m);
    delete[]arr;
    return 0;

}
void recur(int*arr,int n,int m,int s_idx,int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=s_idx;i<n-m+cnt+1;i++){
        ans[cnt]=arr[i];
        recur(arr,n,m,i+1,cnt+1);
    }
    return;
}