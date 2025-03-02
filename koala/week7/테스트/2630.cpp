#include<iostream>
using namespace std;
int sq_cnt[2]={0};

void sq_recur(int **arr,int l,int r=0,int c=0);
bool is_squar(int **arr,int r,int c,int l);

int main(){
    int n;
    cin>>n;
    int **arr=new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    sq_recur(arr,n);

    for(int i=0;i<2;i++){
        cout<<sq_cnt[i]<<endl;
    }

    for(int i=0;i<n;i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

void sq_recur(int **arr,int l,int r,int c){
    if(is_squar(arr,r,c,l)){
        sq_cnt[arr[r][c]]++;
        return;
    }
    sq_recur(arr,l/2,r,c);
    sq_recur(arr,l/2,r+l/2,c+l/2);
    sq_recur(arr,l/2,r+l/2,c);
    sq_recur(arr,l/2,r,c+l/2);
}


bool is_squar(int **arr,int r,int c,int l){
    int q=arr[r][c];
    for(int i=r;i<r+l;i++){
        for(int j=c;j<c+l;j++){
            if(q!=arr[i][j]){
                return false;
            }
        }
    }
    return true;
}