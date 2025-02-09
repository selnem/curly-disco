#include<iostream>
#include<stack>
using namespace std;
int main(){
    int k;
    stack<int>cash;
    cin>>k;
    int temp;
    for(int i=0;i<k;i++){
        cin>>temp;
        if(temp){
            cash.push(temp);
        }
        else{
            cash.pop();
        }
    }
    int ans=0;
    int tmp;
    while(!cash.empty()){
        ans+=cash.top();
        cash.pop();
    }
    cout<<ans;
    return 0;
}