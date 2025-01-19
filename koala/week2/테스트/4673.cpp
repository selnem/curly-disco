#include<iostream>
#include<algorithm>
using namespace std;
int D_fuc(int n);
bool finder(int *D_nums,int n,int arr_size);
int main(){
    int arr[10000]={0};
    for(int i=1;i<=10000;i++){
        arr[i-1]=D_fuc(i);
    }
    sort(arr,arr+10000,less<int>());
    for(int i=1;i<=10000;i++){
        if(finder(arr,i,10000)){
            continue;
        }
        cout<<i<<'\n';
    }
    return 0;

}

int D_fuc(int n){
    int ans=n;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
bool finder(int *D_nums,int n,int arr_size){
    int left=0,right=arr_size-1,mid;
    while(1){
        mid=(left+right)/2;
        if(D_nums[mid]==n){
            return true;
        }
        else if(D_nums[mid]>n){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        if(left>right){
            return false;
        }
    }
}