#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    mp["enter"]=1;
    mp["leave"]=-1;
    string f_line,s_line;
    map<string,int,greater<string> >member;

    for(int i=0;i<n;i++){
        cin>>f_line>>s_line;
        member[f_line]+=mp[s_line];
    }
    for(auto mb=member.begin();mb!=member.end();mb++){
        if(mb->second){
            cout<<mb->first<<'\n';
        }
    }
    return 0;
}