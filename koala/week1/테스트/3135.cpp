#include<iostream>
using namespace std;
int abs(int n);
int main(){
    int A,B,N,temp;
    cin>>A>>B>>N;
    int d=abs(B-A);
    for(int i=0;i<N;i++){
        cin>>temp;
        d=d<abs(B-temp)?d:abs(B-temp);
    }
    if(d<abs(B-A)){
        cout<<++d;
    }
    else{
        cout<<abs(B-A);
    }
    return 0;
}


int abs(int n){
    if(n<0){
        return -n;
    }
    else{
        return n;
    }
}