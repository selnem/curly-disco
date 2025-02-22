#include<iostream>
using namespace std;
int arr[8];
bool v_bool[9]={0};
void recur(int n,int cnt=0);
int main(){
    int n;
    cin>>n;
    recur(n);
    return 0;
}
void recur(int n,int cnt){
    if(cnt==n){
        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<' ';
        }
        cout<<arr[n-1];
        cout<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if(v_bool[i]){
            continue;
        }
        arr[cnt]=i;
        v_bool[i]=true;
        recur(n,cnt+1);
        v_bool[i]=false;
    }
}