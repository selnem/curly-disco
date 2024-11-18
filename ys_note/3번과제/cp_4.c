#include<stdio.h>
int cnt=0;
int factorial(int n);
int main(){
    int N,X;
    
    printf("input n,x");
    scanf("%d %d",&N, &X);
    factorial(N);
    factorial(N-X);
    printf("%d",cnt);
    return 0;
}
int factorial(int n){
    cnt++;
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
    
}