#include<stdio.h>
#include<stdlib.h>

void free_ptr(int *arr);
void free_ptr2(int **arr);
int main(){
    int *arr=(int *)malloc(12);
    int num=4;
    for(int k=0;k<3;k++){
        arr[k]=num++;
    }

    printf("notyet %p\n",arr);
    for(int i=0;i<3;i++){
        printf("notyet %d\n",arr[i]);
    }
    free(arr);
    //free_ptr(arr);
    //free_ptr2(&arr);

    printf("\n\ndo %p\n",arr);
    for(int i=0;i<3;i++){
        printf("do %d\n",arr[i]);
    }
    return 0;

}
void free_ptr(int *arr){
    free(arr);
    arr=NULL;
}
void free_ptr2(int **arr){
    free(*arr);
    *arr=NULL;
}