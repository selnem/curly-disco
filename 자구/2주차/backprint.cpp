#include<iostream>
using namespace std;

int dp[100]={0};
void backPrint(int n);
int NSum(int n);
int fib(int n);

int main(){
    backPrint(5);
    cout<<endl<<NSum(10)<<endl;
    cout<<fib(6)<<endl;
    return 0;
}
void backPrint(int n){
    if(n==0){
        return;
    }
    cout<<n<<' ';
    backPrint(n-1);
    return;
}
int NSum(int n){
    if(n==1){
        return 1;
    }
    return n+NSum(n-1);
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]){
        return dp[n];
    }
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}