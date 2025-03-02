#include<iostream>
#include<map>
#define M_NUM 3
using namespace std;
int dp[30][10]={0};
int S_station(int n,int num=0,int cnt=0);
int main(){
    int n;
    cin>>n;
    cout<<S_station(n);
    return 0;
}
int S_station(int n,int sum,int cnt){
    if(cnt==n){
        if(sum%M_NUM==0){
            return 1;
        }
        return 0;
    }
    if(dp[sum][cnt]){
        return dp[sum][cnt];
    }
    for(int i=0;i<=2;i++){
        if(cnt==0&&i==0){
            continue;
        }
        dp[sum][cnt]+=S_station(n,sum+i,cnt+1);
    }
    return dp[sum][cnt];
}