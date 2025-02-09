#include<iostream>
using namespace std;
bool in_range(int ap,int s,int e);
int main(){
    int N,M,T;
    cin>>N>>M;
    int s=1;
    int e=M;
    cin>>T;
    int ap,dis=0;
    int delta;
    for(int i=0;i<T;i++){
        cin>>ap;
        if(in_range(ap,s,e)){
            continue;
        }
        else if(e<ap){
            delta=ap-e;
            e+=delta;
            s+=delta;
            dis+=delta;
        }
        else{
            delta=s-ap;
            e-=delta;
            s-=delta;
            dis+=delta;
        }
    }
    cout<<dis;
    return 0;
}

bool in_range(int ap,int s,int e){
    return s<=ap&&ap<=e;
}