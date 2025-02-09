#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBal(string &line);
int main(){
    string line;
    const char *ans_prn[2]={"no","yes"};
    while(1){
        getline(cin,line);
        if(line=="."){
            break;
        }
        cout<<ans_prn[isBal(line)]<<'\n';
    }
    return 0;
}

bool isBal(string &line){
    stack <char>st;
    for(int i=0;i<line.length();i++){
        if(line[i]=='('||line[i]=='['){
            st.push(line[i]);
        }
        else if(line[i]==')'){
            if(st.empty()){
                return false;
            }
            if(st.top()!='('){
                return false;
            }
            st.pop();
        }
        else if(line[i]==']'){
            if(st.empty()){
                return false;
            }
            if(st.top()!='['){
                return false;
            }
            st.pop();
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
    
}