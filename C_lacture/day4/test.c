#include <stdio.h>

int main(){
    int *k , a=100;

    k=&a;
    printf("%d %d",k,++k);

}