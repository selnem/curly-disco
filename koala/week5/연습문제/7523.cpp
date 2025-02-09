#include<iostream>
using namespace std;

long long n_sum(long long start,long long end);

int main(){
    int n,start,end;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>start>>end;
        cout<<"Scenario #"<<i<<":"<<'\n'<<n_sum(start,end)<<'\n'<<'\n';
    }
    return 0;
}

long long n_sum(long long start,long long end){
    return((start+end)*(end-start+1))/2;
}