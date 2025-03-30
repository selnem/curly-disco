#include<iostream>
using namespace std;
typedef long long LL;

LL dp[10][65]={0};
LL cnt_DP(int s,int n);
int main(){
    int t;
    int n;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        LL ans=0;
        for(int j=0;j<10;j++){
            ans+=cnt_DP(j,n);
        }
        cout<<ans<<endl;
    }
}

LL cnt_DP(int s,int n){
    if(n==1){
        return 1;
    }
    if(dp[s][n]){
        return dp[s][n];
    }

    for(int i=s;i<10;i++){
        dp[s][n]+=cnt_DP(i,n-1);
    }
    return dp[s][n];
}
