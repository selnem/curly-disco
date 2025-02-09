#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    int ans=0;
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        cin>>temp;
        cnt[temp]++;
    }
    for(const auto &tmp:cnt){
        if(tmp.first==tmp.second){
            ans=tmp.first;
        }
    }
    if(ans==0&&cnt[0]!=0){
        ans=-1;
    }
    cout<<ans;
    return 0;
}