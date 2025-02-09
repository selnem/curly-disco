#include<iostream>
using namespace std;
int max_cupon(int n,int k);
int main(){
    int n,k;
    while(cin>>n>>k){
        cout<<max_cupon(n,k)<<'\n';
    }
    return 0;
}

int max_cupon(int n,int k){
    int total=n;
    while(n>=k){
        total+=n/k;
        n=n/k+n%k;
    }
    return total;
}