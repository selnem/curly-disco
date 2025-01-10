#include<iostream>
using namespace std;
int main(){
    int N,ans=0;
    cin>>N;
    while(N>=3){
        if(N%5==0){
            ans+=N/5;
            N=0;
            break;
        }
        N-=3;
        ans++;
    }
    if(N!=0){
        ans=-1;
    }
    cout<<ans;
    return 0;
}