#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string temp;
    map<string,int> mp;
    int n;
    int max_n=-1;
    string best_b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        mp[temp]++;
    }
    for(auto bk=mp.begin();bk!=mp.end();bk++){
        if(bk->second>max_n){
            max_n=bk->second;
            best_b=bk->first;
        }
    }
    cout<<best_b;
    return 0;
}
