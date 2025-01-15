#include<iostream>
using namespace std;
//N마리 == 고양이 + 오목눈이, M개의 다리를 가지고 있을때 고양이 오목눈이 숫자를 구하라.(완탐으로) 
int main(){
    int N,M;
    cin>>N>>M;
    for(int i=0;i<=N;i++){
        int j=N-i;
        if(4*i+2*j==M){
            cout<<i<<' '<<j<<endl;
        }
    }


    return 0;
}