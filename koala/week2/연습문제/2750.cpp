#include<iostream>
using namespace std;

void Merge_sort(int *arr,int left,int right);
void Merge(int *arr,int left,int mid,int right);

int main(){
    int N;
    cin>>N;
    int *arr=new int[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Merge_sort(arr,0,N-1);

    for(int i=0;i<N;i++){
        cout<<arr[i]<<'\n';
    }

    delete[] arr;
    return 0;
}

void Merge_sort(int *arr,int left,int right){
    if(left>=right){
        return;
    }
    int mid=(left+right)/2;
    Merge_sort(arr,left,mid);
    Merge_sort(arr,mid+1,right);
    Merge(arr,left,mid,right);
}
void Merge(int *arr,int left,int mid,int right){
    int lIndex=left,rIndex=mid;
    int indexOfsort=0;
    rIndex++;
    int *sort_arr = new int [right-left+1];
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
    delete[] sort_arr;
}