#include<iostream>
#include<string>
using namespace std;

inline char ACcrypt(int a,int b,char c);

int main(){
    int n;
    int a,b;
    string line;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a>>b;
        cin>>line;
        for(int i=0;i<line.length();i++){
            cout<<ACcrypt(a,b,line[i]);
        }
        cout<<'\n';
    }
    return 0;
}
inline char ACcrypt(int a,int b,char c){
    return ((c-'A')*a+b)%26+'A';
}