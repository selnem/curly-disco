#include<iostream>
using namespace std;

int main(){
    int cnt_arr[100001]={0};
    int n,m;
    int a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cnt_arr[a]++;
        cnt_arr[b]++;
    }
    for(int i=1;i<=n;i++){
        cout<<cnt_arr[i]<<'\n';
    }
    return 0;
}