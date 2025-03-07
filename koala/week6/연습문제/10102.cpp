#include<iostream>
using namespace std;

int main(){
    int cnt[150]={0};
    int n;
    char idx;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>idx;
        cnt[idx]++;
    }
    if(cnt['A']<cnt['B']){
        cout<<'B';
    }
    else if(cnt['A']>cnt['B']){
        cout<<'A';
    }
    else{
        cout<<"Tie";
    }

    return 0;
}