#include <stdio.h>
#include <stdlib.h>
/*
int max_fuc(int *arr,int n){
    int Max=arr[0];
    for(int i=1;i<n;i++){
        if(Max<arr[i]){
            Max=arr[i];
        }
    }
    return Max;
}
*/
int main(void){
    int n,fixNum;
    scanf("%d",&n);
    int *in_arr=(int *)malloc(sizeof(int)*n);
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&in_arr[i]);
    }
    int Max=in_arr[0];
    for(int i=1;i<n;i++){
        if(Max<in_arr[i]){
            Max=in_arr[i];
        }
    }
    for(int j=0;j<n;j++){
        sum+=(double)in_arr[j]/(double)Max*100;
    }
    sum/=n;
    printf("%lf",sum);
    free(in_arr);
    return 0;

}
