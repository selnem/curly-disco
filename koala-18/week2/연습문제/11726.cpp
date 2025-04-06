#include<iostream>
using namespace std;
int dp[1001]={0};
int cnt_2T(int n,int s);
int main(){
    int n;
    cin>>n;
    cout<<cnt_2T(n,0);
    return 0;
}

int cnt_2T(int n,int s){
    if(s>=n){
        if(s==n){
            return 1;
        }
        return 0;
    }
    if(dp[s]){
        return dp[s];
    }
    for(int i=1;i<=2;i++){
        dp[s]+=cnt_2T(n,s+i)%10007;
    }

    return dp[s]%10007;  
}