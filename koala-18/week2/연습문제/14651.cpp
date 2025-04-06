#include<iostream>
#define M_NUM 3
#define div 1000000009
using namespace std;
typedef long long LL;
const LL div=1000000009;
LL dp[6666][33334]={0};
LL S_station(int n,int sum=0,int cnt=0);

int main(){
    int n;
    cin>>n;
    LL cnt=0;
    for(int i=1;i<3;i++){
        cnt+=S_station(n,i,1)%div;
    }
    cout<<cnt%div;
    return 0;
}
LL S_station(int n,int sum,int cnt){
    if(cnt==n){
        if(sum%M_NUM==0){
            return 1;
        }
        return 0;
    }
    if(dp[sum][cnt]){
        return dp[sum][cnt];
    }
    for(int i=0;i<3;i++){
        dp[sum][cnt]+=S_station(n,sum+i,cnt+1)%div;
    }
    return dp[sum][cnt]%div;
}