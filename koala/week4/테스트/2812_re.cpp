#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string line;
    int n,m;
    stack<char>st;
    cin>>n>>m;
    cin>>line;
    for(int i=0;i<line.length();i++){
        while(!st.empty()&&m>0&&line[i] > st.top()){
            m--;
            st.pop();
        }
        st.push(line[i]);
    }
    while(m>0){
        st.pop();
        m--;
    }
    char *ans=new char[n-m];
    int idx=0;
    while(!st.empty()){
        ans[idx++]=st.top();
        st.pop();
    }
    for(int i=idx-1;i>=0;--i){
        cout<<ans[i];
    }
    delete[]ans;
    return 0;

}