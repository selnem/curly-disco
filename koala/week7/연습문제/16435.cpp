#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]<=l){
            l++;
        }
        else{
            break;
        }
    }
    cout<<l;
    delete[] arr;
    return 0;
}
