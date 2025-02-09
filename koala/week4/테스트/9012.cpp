#include<string>
#include<iostream>
#include<stack>
using namespace std;
bool isVPS(string &line);
int main(){
    string line;
    int n;
    const char *ans_prn[2]={"NO","YES"};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>line;
        cout<<ans_prn[isVPS(line)]<<'\n';
    }
    return 0;
    

}
bool isVPS(string &line){
    stack<char>vps;
    for(int i=0;i<line.length();i++){
        if(line[i]=='('){
            vps.push(line[i]);
        }
        else{
            if(vps.empty()){
                return false;
            }
            vps.pop();
        }
    }
    if(vps.empty()){
        return true;
    }
    return false;
}