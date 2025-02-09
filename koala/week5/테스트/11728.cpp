#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int size=N+M;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    delete[]arr;
    return 0;
}