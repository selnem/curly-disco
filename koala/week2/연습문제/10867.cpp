#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int *arr=new int [N+1];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    sort(arr,arr+N,less<int>());

    for(int i=0;i<N-1;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        cout<<arr[i]<<' ';
    }
    cout<<arr[N-1];
    return 0;   
}