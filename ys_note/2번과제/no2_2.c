#include<stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for (int j=1;j<i;j++){
            printf("  ");
        }
        for (int k=n*2-(i*2-1);k>=1;k-=1){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}