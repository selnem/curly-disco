#include<iostream>
using namespace std;
int main(){
    int N,T,ans=0,time=30;
    cin>>N;
    for(int i=0;i<N;i++){
        if(time<=0){
            time=30;
        }
        cin>>T;
        if(T<=time*2){
            ans++;
        }
        time-=T;
    }
    cout<<ans<<endl;
    return 0;
}