#include<iostream>
#include<string>
using namespace std;
bool Palindrome(string &line);

int main(){
    string line;
    cin>>line;
    const char *ans_prn[2]={"false","true"};
    cout<<ans_prn[Palindrome(line)];
    return 0;
}

bool Palindrome(string &line){
    bool isPal=true;
    int s=0,e=line.length()-1;
    while(s<e){
        if(line[s]!=line[e]){
            isPal=false;
            break;
        }
        ++s;
        --e;
    }
    return isPal;
}