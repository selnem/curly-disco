#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int>st;
    int* arr=new int [n];
    int* ans_arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans_arr[i]=-1;
        }
        else{
            ans_arr[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans_arr[i]<<' ';
    }
    
    
    delete[]ans_arr;
    delete[]arr;
    return 0;
}