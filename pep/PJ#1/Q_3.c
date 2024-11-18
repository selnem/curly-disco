#include <stdio.h>
#include <math.h>

void main(){
    long int arr[1000]={0},temp;
    int i=1,N;
    
    do{
        printf("양의 정수를 입력하세요:\n");
        scanf("%ld",&arr[0]);
        }while(arr[0]<=0);
    temp=arr[0];
    while(temp>0){
        arr[i]=temp%10+i;
        temp/=10;
        i++;
    }
    printf("배열 출력:\n");
    printf("%ld\n",arr[0]);
    for(int j=1;j<i;j++){
        printf("%ld ",arr[j]);
    }
    printf("\n");
    
    do{
        printf("N 자릿수를 입력하세요:\n");
        scanf("%d", &N);
    }while(N>=i||N<=0);
    printf("N(%d)번째 자릿수는 K(%ld)이며 N+1 배열의 원소는 %ld입니다.\n", N, arr[N]-N, arr[N]);
    return;
}

/* 입출력은 다음 코드 이용할 것
printf("양의 정수를 입력하세요:\n");
scanf("%ld", 변수);
printf("배열 출력:\n");
printf("%ld\n", 변수);
printf("N 자릿수를 입력하세요:\n");
scanf("%d", 변수);
printf("N(%d)번째 자릿수는 K(%ld)이며 N+1 배열의 원소는 %ld입니다.\n", 변수, 변수, 변수);
*/