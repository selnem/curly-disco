#include<stdio.h>
int main(void){
    int n=9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0){
            printf("%d ",j);
            }
            if(j==2*i-1){
                printf("\n");
            }
        }
    }
    return 0;
}