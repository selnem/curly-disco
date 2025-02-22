#include<iostream>
#include<string>
using namespace std;

int main(){
    const char *cvt="XYZABCDEFGHIJKLMNOPQRSTUVW";
    string line;
    cin>>line;
    for(int i=0;i<line.length();i++){
        cout<<cvt[line[i]-'A'];
    }
    return 0;

}