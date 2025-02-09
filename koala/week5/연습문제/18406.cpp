#include<iostream>
#include<string>
using namespace std;

int main(){
    const char*prn[2]={"READY","LUCKY"};
    string line;
    int pre=0,suf=0;
    cin>>line;
    for(int i=0;i<line.length()/2;++i){
        pre+=line[i]-'0';
    }
    for(int i=line.length()/2;i<line.length();++i){
        suf+=line[i]-'0';
    }
    cout<<prn[pre==suf];
    return 0;
}