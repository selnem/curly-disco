#include<iostream>
#include<string>
using namespace std;
int beautiful_num(const string &line);
int main(){
    int n;
    string line;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>line;
        cout<<beautiful_num(line)<<endl;
    }
    return 0;
}
int beautiful_num(const string &line){
    bool vis[150]={0};
    int cnt=0;
    for(int i=0;i<line.length();i++){
        if(vis[line[i]]){
            continue;
        }
        ++cnt;
        vis[line[i]]=true;
    }
    return cnt;
}
