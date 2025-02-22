#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1<<30;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]>m){
                    continue;
                }
                ans=min(ans,m-arr[i]-arr[j]-arr[k]);
            }
        }
    }
    cout<<m-ans;
    return 0;


}