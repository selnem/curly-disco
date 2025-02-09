#include<iostream>
using namespace std;

int main(){
    int N,M;
    int A,B;
    cin>>N>>M;
    int arr[10001]={0};
    for(int i=0;i<M;i++){
        cin>>A>>B;
        arr[A]++;
        arr[B]++;
    }
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}