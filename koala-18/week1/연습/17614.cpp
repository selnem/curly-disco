#include<iostream>
#include<string>
using namespace std;

int is_369(const string &s);

int main(){
    int n;
    int cnt=0;
    string tmp;
    cin>>n;
    for(int i=1;i<=n;i++){
        tmp=to_string(i);
        cnt+=is_369(tmp);
    }
    cout<<cnt;
    return 0;
}

int is_369(const string &s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='3'||s[i]=='6'||s[i]=='9'){
            cnt++;
        }
    }
    return cnt;
}