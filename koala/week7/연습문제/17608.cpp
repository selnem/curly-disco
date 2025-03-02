#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n,tmp;
    stack<int>st;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(st.empty()){
            st.push(tmp);
            continue;
        }

        while(st.top()<=tmp){
            st.pop();
            if(st.empty()){
                break;
            }
        }
        st.push(tmp);
    }
    cout<<st.size();
    return 0;
}