#include<iostream>
#include<algorithm>
using namespace std;

void arr_prn(int *arr,int n);

int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    int temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i;
    for(i=n-1;i>=1;i--){
        if(arr[i-1]<arr[i]){
            break;    
        }        
    }

    if(i==0){
        cout<<-1;
        delete[]arr;
        return 0;
    }
    i--;
    for(int j=n-1;j>i;j--){
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            sort(arr+i+1,arr+n);
            break;
        }
    }
    arr_prn(arr,n);

    
    delete[]arr;
    return 0;
}
void arr_prn(int *arr,int n){
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<' ';
    }
    cout<<arr[n-1];
}