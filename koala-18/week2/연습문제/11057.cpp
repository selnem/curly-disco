#include<iostream>
#define div 10007;
using namespace std;

int dp[1001][10]={0};

int UpNum(int n,int s);

int main(){
    int N;
    cin>>N;
    int cnt=0;
    for(int i=0;i<10;i++){
        cnt+=UpNum(N,i)%div;
    }
    cout<<cnt%div;
}

int UpNum(int n,int s){
    if(n==1){
        return 1;
    }
    if(dp[n][s]){
        return dp[n][s];
    }
    for(int i=s;i<10;i++){
        dp[n][s]+=UpNum(n-1,i) % div;
    }
    return dp[n][s] % div;
}