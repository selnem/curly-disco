#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000001]={0};
int makeOne(int n);
int main(){
    int n;
    cin>>n;
    cout<<makeOne(n);
    return 0; 
}

int makeOne(int n){
    if(n==1){
        return 0;
    }
    if(dp[n]){
        return dp[n];
    }
    int tmp1,tmp2,tmp3;
    tmp1=tmp2=tmp3=1<<30;
    if(n%2==0){
        tmp1=makeOne(n/2);
    }
    if(n%3==0){
        tmp2=makeOne(n/3);
    }
    if(1){
        tmp3=makeOne(n-1);
    }
    dp[n]=min( {tmp1,tmp2,tmp3} )+1;
    return dp[n];
}