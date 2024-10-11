#include<stdio.h>
int multiply(int N){
    int num=1;
    for(int i=0;i<N;i++){
        num*=10;
    }
    return num;
}
int main(){
    int A,B,N,numOfN;
    double ans;
    scanf("%d %d %d",&A,&B,&N);
    ans=(double)A/(double)B;
    numOfN=(int)(ans*multiply(N))-((int)(ans*multiply(N-1)))*10;
    printf("%d",numOfN);
    return 0;
}