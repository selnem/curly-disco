#include<iostream>
using namespace std;

int main(){
    int n;
    char line[110];
    cin>>n;
    cin>>line;
    int s=0,e=n-1;
    while(s<=e){
        if(line[s]=='?'&&line[e]=='?'){
            line[s]='a';
            line[e]='a';
        }
        else if(line[s]=='?'||line[e]=='?'){
            if(line[s]=='?'){
                line[s]=line[e];
            }
            else{
                line[e]=line[s];
            }
        }
        ++s;
        --e;
    }
    cout<<line;
    return 0;
}