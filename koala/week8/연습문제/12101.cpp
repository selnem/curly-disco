#include<iostream>
using namespace std;
int arr[11];
int idx=0;

void recur(int n,int k,int sum=0,int cnt=0);

int main(){
    int n,k;
    cin>>n>>k;
    recur(n,k);
    if(idx<k){
        cout<<-1;
    }
    return 0;
}

void recur(int n,int k,int sum,int cnt){
    if(sum>=n||cnt>=n){
        if(sum==n){
            idx++;
            if(idx!=k){
                return;
            }
            for(int i=0;i<cnt-1;i++){
                cout<<arr[i]<<'+';
            }
            cout<<arr[cnt-1];
        }
        return;
    }

    for(int i=1;i<=3;i++){
        arr[cnt]=i;
        recur(n,k,sum+i,cnt+1);
    }

}