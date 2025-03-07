#include<iostream>
using namespace std;

int arr[20];
int cnt=0;

void recur(int n,int s,int sum=0,int start=0,int d=0);

int main(){
    int n,s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recur(n,s);
    cout<<cnt;
    return 0;
}

void recur(int n,int s,int sum,int start,int d){
    if(sum==s&&d!=0){
        cnt++;
    }
    for(int i=start;i<n;i++){
        recur(n,s,sum+arr[i],i+1,d+1);
    }
    return;
}

