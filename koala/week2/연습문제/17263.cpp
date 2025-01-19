#include<iostream>
using namespace std;
int main(){
    int max=-1;
    int N,temp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(max<temp){
            max=temp;
        }
    }
    cout<<max;
    return 0;
}