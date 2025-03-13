#include <iostream>
#include<algorithm>
#define size 1000000
using namespace std;


int main() {
    int N,Q,temp;
    int arr[size+2]={0};
    int prifix[size+10]={0};
    int suffix[size+10]={0};
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        cin>>temp;
        arr[temp+1]++;
        cout<<temp+1;
    }
    sort(arr,arr+N,less<int>());
    for(int i=1;i<=1000001;i++){
        prifix[i]=prifix[i-1]+arr[i];
        suffix[size-i+2]=suffix[size-i+3]+arr[size-i+2];
    }
    int start,end;
    for(int i=0;i<Q;i++){
        cin>>start>>end;
        cout<<N-prifix[start]-suffix[end+2]<<'\n';
    }
    return 0;
}