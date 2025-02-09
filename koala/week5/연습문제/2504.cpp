#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string line;
    stack<char> st;
    int ans=0,m=1;
    cin>>line;
    for(int i=0;i<line.length();i++){
        if(line[i]=='('){
            m*=2;
            st.push(line[i]);
        }
        else if(line[i]=='['){
            m*=3;
            st.push(line[i]);
        }
        else if(line[i]==')'){
            if(st.empty()){
                cout<<0;
                return 0;
            }
            if(st.top()!='('){
                cout<<0;
                return 0;
            }
            if(line[i-1]=='('){
                ans+=m;
                m/=2;
                st.pop();
            }
            else{
                m/=2;
                st.pop();
            }

        }
        else if(line[i]==']'){
            if(st.empty()){
                cout<<0;
                return 0;
            }
            if(st.top()!='['){
                cout<<0;
                return 0;
            }
            if(line[i-1]=='['){
                ans+=m;
                m/=3;
                st.pop();
            }
            else{
                m/=3;
                st.pop();
            }

        }
    }
    if(st.empty()){
        cout<<ans;
    }
    else{
        cout<<0;
    }
    return 0;
}