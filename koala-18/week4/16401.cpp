#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int M,N;
    vector<int> arr;
    int tmp;
    cin>>M>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    int max_len=0;
    for(const auto &it:arr){
        max_len=max(max_len,it);
    }
    int l=1;
    int r=max_len;
    int ans=0;
    while(l<=r){
        int m=(l+r)/2;
        int cnt=0;
        for(const auto &it:arr){
            cnt+=it/m;
        }
        if(cnt>=M){
            ans=m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<ans;
    return 0;
}