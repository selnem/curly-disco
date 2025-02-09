#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    int n;
    string line;
    int arr[30];
    stack<double>st;
    cin>>n;
    cin>>line;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=0;
    for(int i=0;i<line.length();i++){
        if('A'<=line[i]&&line[i]<='Z'){
            st.push(arr[idx++]);
        }
        else{
            if(st.empty()){
                continue;
            }
            double tmp=st.top();
            st.pop();
            if(line[i]=='+'){
                tmp+=st.top();
            }
            else if(line[i]=='-'){
                tmp=st.top()-tmp;
            }
            else if(line[i]=='/'){
                tmp=st.top()/tmp;
            }
            else if(line[i]=='*'){
                tmp=st.top()*tmp;
            }
            st.pop();
            st.push(tmp);
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<st.top();

    return 0;

    
}