#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int temp;
    for(int i=0;i<1000;i++){
        cin>>arr[i];
    }
    for(int i=0;i<999;i++){
        for(int j=0;j<999-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<1000;i++){
        cout<<arr[i]<<'\n';
    }
    return 0;
}