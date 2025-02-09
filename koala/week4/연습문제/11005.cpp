#include<iostream>
#include<string>
using namespace std;
void recur(int N,int B);
string mapper="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    int N,B;
    cin>>N>>B;
    if(N==0){
        cout<<0;
    }
    recur(N,B);
    return 0;
    
}
void recur(int N,int B){
    if(N<=0){
        return;
    }
    recur(N/B,B);
    cout<<mapper[N%B];
}
