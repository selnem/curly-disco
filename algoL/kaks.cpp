#include<iostream>
using namespace std;

int main(){
    int ans_arr[4];
    int cnt=0;
    for(int i=-1000;i<=1000;i++){
        if((i*i+1077*i+256676)==0){
            ans_arr[cnt++]=i;
        }
    }

    for(int i=0;i<cnt;i++){
        cout<<ans_arr[i]<<endl;
    }

    return 0;
}
//-721 -356