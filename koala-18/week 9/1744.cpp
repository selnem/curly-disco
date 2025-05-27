#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> parr;
    vector<int> marr;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(tmp>0) parr.push_back(tmp);
        else marr.push_back(tmp);
    }
    sort(parr.begin(),parr.end(),greater<>());
    sort(marr.begin(),marr.end());
    int ans=0;
    if(parr.size()%2!=0){
        ans+=parr[parr.size()-1];
    }
    for( int i=0;i<(int)parr.size()-1;){
        
        if(parr[i+1]==1) {ans+=parr[i]+parr[i+1];}
        else if(parr[i+1]>0){
            ans+=parr[i]*parr[i+1];
        }
        i+=2;
    }

    if(marr.size()%2!=0){
        ans+=marr[marr.size()-1];
    }
    for(int i=0;i<(int)marr.size()-1;i+=2){
        ans+=marr[i]*marr[i+1];
    }
    
    
    cout<<ans;
    
    return 0;
}

