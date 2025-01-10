#include<iostream>
using namespace std;
int main(){
    int N,sum=0,tmp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        sum+=tmp;
    }
    cout<<sum-(N-1);
    return 0;
}