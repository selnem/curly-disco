#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool finder(string *S_set,string &line,int size);

int main(){
    int N,M,cnt=0;
    cin>>N>>M;
    string *S_set=new string[N];
    string temp;
    for(int i=0;i<N;i++){
        cin>>S_set[i];
    }
    sort(S_set,S_set+N,less<string>());
    for(int i=0;i<M;i++){
        cin>>temp;
        if(finder(S_set,temp,N)){
            cnt++;
        }
    }
    cout<<cnt;
    delete[] S_set;
    return 0;
}
bool finder(string *S_set,string &line,int size){
    int left=0,right=size-1,mid;
    while(1){
        mid=(left+right)/2;
        if(S_set[mid]==line){
            return true;
        }
        else if(S_set[mid]>line){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        if(left>right){
            return false;
        }
    }
}