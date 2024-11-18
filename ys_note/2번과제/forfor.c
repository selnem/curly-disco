#include<stdio.h>
int main(){
    int n=5,i;
    int line_num=0;
    for(i=1;i<=2*n;i++){
        line_num+=i<=n?1:-1;
        for(int j=1;j<=n-line_num; j++){
            printf(" ");
        }
        for(int k=1;k<=line_num;k++){
            printf("%d ",line_num);
        }
        printf("\n");
    }
    
    return 0;
}