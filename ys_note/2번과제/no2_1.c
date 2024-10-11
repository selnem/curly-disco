#include<stdio.h>
int print_star(int n){
    for (int i=1;i<=n;i++){
        printf("* ");
    }
    printf("\n");
    return 0;
}
int main(){
    int n=7;
    for(int i=n;i>=1;i-=1){
        print_star(i);
    }
    return 0;
}