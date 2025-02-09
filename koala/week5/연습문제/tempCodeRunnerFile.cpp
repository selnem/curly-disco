#include<iostream>
using namespace std;

int n_sum(int start,int end);

int main(){
    int n,start,end;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>start>>end;
        cout<<"Scenario #"<<i<<":"<<'\n'<<n_sum(start,end)<<'\n'<<'\n';
    }
    return 0;
}

int n_sum(int start,int end){
    return((start+end)*(end-start+1))/2;
}