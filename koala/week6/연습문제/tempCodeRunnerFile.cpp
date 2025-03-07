#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

ll Power(ll n);

int main(){
    ll cube[3];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>cube[j];
        }
        sort(cube,cube+3);
        cout<<Power(cube[2])+Power(cube[1]+cube[0])<<'\n';
    }
    return 0;
}

ll Power(ll n){
    return n*n;
}