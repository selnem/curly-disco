#include<stdio.h>
int star(int n){
    if (n==0){
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    star(n-1);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("*");
    }
    return 0;
}

int main(){
    star(5);
    return 0;
}