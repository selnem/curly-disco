#include<iostream>
using namespace std;
int main(){
    int n_1,n_2,N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>n_1>>n_2;
        cout<<"Case #"<<i<<": "<<n_1+n_2<<endl;
    }
    return 0;
}