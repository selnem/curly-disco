#include<iostream>
using namespace std;
int main(){
    int n;
    int b_arr[64]={0};
    cin>>n;
    int size=0;
    while(n>0){
        b_arr[size++]=n%2;
        n/=2;
    }
    int ans=0;
    int mtp=1;
    for(int i=size-1;i>=0;--i){
        ans+=mtp*b_arr[i];
        mtp*=2;
    }
    cout<<ans;
    return 0;
}