#include<iostream>
#include<string>
using namespace std;


void Merge_sort(string *arr,int left,int right);
void Merge(string *arr,int left,int mid,int right);


int main(){
    int N,M;
    cin>>N>>M;
    string *D_arr=new string[N];
    string *B_arr=new string[M];
    string *DB_arr=new string[(N>M?M:N)];
    for(int i=0;i<N;i++){
        cin>>D_arr[i];
    }

    for(int i=0;i<M;i++){
        cin>>B_arr[i];
    }
    Merge_sort(D_arr,0,N-1);
    Merge_sort(B_arr,0,M-1);
    int D_index=0,B_index=0,cnt=0;

    while(1){
        if(D_arr[D_index]==B_arr[B_index]){
            DB_arr[cnt++]=D_arr[D_index];
            D_index++;
            B_index++;
        }
        else if(D_arr[D_index]>B_arr[B_index]){
            B_index++;
        }
        else{
            D_index++;
        }
        if(D_index==N||B_index==M){
            break;
        }
    }

    
    
    cout<<cnt<<endl;

    for(int i=0;i<cnt;i++){
        cout<<DB_arr[i]<<'\n';
    }

    delete[] D_arr;
    delete[] B_arr;
    delete[] DB_arr;
    return 0;
}

void Merge_sort(string *arr,int left,int right){
    if(left>=right){
        return;
    }
    int mid=(left+right)/2;
    Merge_sort(arr,left,mid);
    Merge_sort(arr,mid+1,right);
    Merge(arr,left,mid,right);
}
void Merge(string *arr,int left,int mid,int right){
    int lIndex=left,rIndex=mid;
    int indexOfsort=0;
    rIndex++;
    string *sort_arr = new string [right-left+1];
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