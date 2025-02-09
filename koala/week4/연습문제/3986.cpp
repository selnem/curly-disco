#include<iostream>
#include<string>
#include<stack>
using namespace std;
int is_goodword(string &line);
int main(){
    int n,ans=0;
    string line;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>line;
        ans+=is_goodword(line);
    }
    cout<<ans;
    return 0;
}
int is_goodword(string &line){
    stack<char>st;
    for(int i=0;i<line.length();i++){
        if(st.empty()){
            st.push(line[i]);
        }
        else{
            if(st.top()==line[i]){
                st.pop();
            }
            else{
                st.push(line[i]);
            }
        }
    }
    if(st.empty()){
        return 1;
    }
    return 0;
}