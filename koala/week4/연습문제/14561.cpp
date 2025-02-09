#include<iostream>
using namespace std;
int is_H(long long base,long long n);
int main(){
    int n;
    long long num,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num>>b;
        cout<<is_H(num,b)<<endl;
    }
    return 0;
}

int is_H(long long base,long long n){
    int arr[64]={0};
    int size=0;
    while(base>0){
        arr[size++]=base%n;
        base/=n;
    }
    int s=0,e=size-1;
    while(s<e){
        if(arr[s++]!=arr[e--]){
            return 0;
        }
    }
    return 1;
}