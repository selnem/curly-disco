#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    int B;
    int ans=0;
    cin>>line;
    cin>>B;

    int mapping[150]={0};
    string map="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<map.length();i++){
        mapping[map[i]]=i;
    }

    int sq=1;

    for(int i=line.length()-1;i>=0;i--){
        ans+=sq*mapping[line[i]];
        sq*=B;    
    }
    cout<<ans;
    return 0;
}