#include <iostream>
using namespace std;

int arr[20];
int dp[20][1000000]={0};
int ans;
int n,m;
int tddp(int idx=0,int sum=0);
int main() {
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans+=tddp(i,arr[i]);
    }
    cout<<ans;
    

    return 0;
}



int tddp(int idx,int sum){
    int cnt=0;
    if(sum==m){
        return 1;
    }
    if(dp[idx][sum]){
        return dp[idx][sum];
    }
    for(int i=idx+1;i<n;i++){
        if(sum+arr[i]!=m){
            cnt+=tddp(i,sum+arr[i]);
        }
    }
    dp[idx][sum]=cnt;
    return dp[idx][sum];

}
