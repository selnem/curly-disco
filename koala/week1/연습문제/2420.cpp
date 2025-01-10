#include<iostream>
using namespace std;
long My_abs(long n);
int main(){
    long  N,M;
    cin>>N>>M;
    cout<<My_abs(N-M);
    return 0;
}

long My_abs(long n){
    if(n<0){
        return -n;
    }
    else{
        return n;
    }
}