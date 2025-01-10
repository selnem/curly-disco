#include<stdio.h>
int main(){
    int T,N,M;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&N,&M);
        printf("%d %d",2*M-N,N-M);
    }
    return 0;
}