#include<stdio.h>
#include<stdlib.h>
int main(){
    char testString[]="Hellow";
    int *arr=(int *)malloc(sizeof(char)*sizeof(testString));
    for(int i=0;i<sizeof(testString);i++){
        arr[i]=(int)testString[i];
    }
    for(int j=0;j<sizeof(arr);j++){
        printf("%d num %d\n",arr[j],j);
    }
    printf("st len%lu,int len%lu",sizeof(testString),sizeof(arr));
    free(arr);

    return 0;
    

}