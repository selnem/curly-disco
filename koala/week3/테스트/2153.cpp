#include<iostream>
#include<string>
using namespace std;
bool isPrime(int n);
int main(){
    const char *prn[2]={"It is not a prime word.","It is a prime word."};
    string idx="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRXTUVWXYZ";
    int mapping[150]={0};
    for(int i=0;i<idx.length();i++){
        mapping[idx[i]]=i+1;
    }

    int total=0;
    string line;

    cin>>line;
    for(int i=0;i<line.length();i++){
        total+=mapping[line[i]];
    }
    cout<<prn[isPrime(total)];
    return 0;

}
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}