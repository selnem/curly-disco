#include <stdio.h>
#include<stdlib.h>
int main(){
    int a,n=0;
    int *arr=(int*)malloc(sizeof(int));
    while (a!=0){
        scanf("%d",&a);
        arr[n]=a;
    }
    for(int i=0;i<sizeof(arr);i++){
        printf("%d sizeof %lu",arr[i],sizeof(arr));
    }
    free(arr);
    return 0;
}