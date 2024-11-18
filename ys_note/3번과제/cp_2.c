#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int left,int mid, int right);
void mergeSort(int arr[],int left,int right);

int main(){
    int size;
    scanf("%d",&size);
    int *arr_in=(int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr_in[i]);
    }
    mergeSort(arr_in,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d",arr_in[i]);
        printf("\n");
    }

    free(arr_in);
    return 0;
}

void mergeSort(int arr[],int left,int right){
    int mid;
    if(left<right){
    mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
    }
}
void merge(int arr[], int left,int mid, int right){
    int lIndex=left,rIndex=mid;
    int indexOfsort=0;
    rIndex++;
    int *sort_arr = (int*)malloc(sizeof(int)*(right+1-left));
    while(lIndex<=mid&&rIndex<=right){
        if(arr[lIndex]<=arr[rIndex]){
            sort_arr[indexOfsort++]=arr[lIndex++];
        }
        else{
            sort_arr[indexOfsort++]=arr[rIndex++];
        }
    }
    if(lIndex>mid){
        for(int s=rIndex;s<=right;s++){
            sort_arr[indexOfsort++]=arr[s];
        }
    }
    else{
        for(int s=lIndex;s<=mid;s++){
            sort_arr[indexOfsort++]=arr[s];
        }
    }
    indexOfsort=0;
    for(int i=left;i<=right;i++){
        arr[i]=sort_arr[indexOfsort++];
    }
    free(sort_arr);
}