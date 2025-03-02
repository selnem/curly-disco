#include<iostream>
using namespace std;
int recur(int n);
int main(){
    int n;
    cin>>n;
    cout<<recur(n);
    return 0;
}
int recur(int n){
    if(n<=1){
        return 1;
    }
    return n*recur(n-1);
}