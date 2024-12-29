#include<iostream>
using namespace std;
int Time();
int main(){
    int N;
    const char*arr[3]={"do not parallelize","parallelize","does not matter"};
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<arr[Time()]<<endl;
    }
    return 0;

}

int Time(){
    int d,n,s,p;
    cin>>d>>n>>s>>p;
    int ans=d+n*(p-s);
    if(ans>0){
        return 0;
    }
    else if(ans<0){
        return 1;
    }
    else{
        return 2;
    }
}