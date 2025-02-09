#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int *arr_1=new int[n];
    int *arr_2=new int[m];
    int *arr_merge=new int[n+m];
    for(int i=0;i<n;i++){
        cin>>arr_1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr_2[i];
    }
    int idx_1=0,idx_2=0,idx_merge=0;
    while(idx_1<n&&idx_2<m){
        if(arr_1[idx_1]<arr_2[idx_2]){
            arr_merge[idx_merge++]=arr_1[idx_1++];
        }
        else{
            arr_merge[idx_merge++]=arr_2[idx_2++];
        }
    }
    if(idx_1==n){
        for(int i=idx_2;i<m;i++){
            arr_merge[idx_merge++]=arr_2[i];
        }
    }
    else{
        for(int i=idx_1;i<n;i++){
            arr_merge[idx_merge++]=arr_1[i];
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<arr_merge[i]<<' ';
    }
    delete[]arr_1;
    delete[]arr_2;
    delete[]arr_merge;
    return 0;

}