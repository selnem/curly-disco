#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    stack<int>arr;
    char ans[300010];
    int start=1;
    int idx=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        
        while(start<=temp){
            arr.push(start++);
            ans[idx++]='+';
        }
        if(temp==arr.top()){
            arr.pop();
            ans[idx++]='-';
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<idx;i++){
        cout<<ans[i]<<'\n';
    }

    return 0;
}

