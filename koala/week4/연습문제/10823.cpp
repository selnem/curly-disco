#include<iostream>
#include<map>
#include<string>
using namespace std;

class M_stack{
    private:
        int arr[10000];
        int len;
    public:
        M_stack():len(-1){}
        int isEmpty();
        int size();
        int top();
        int pop();
        void push(int num);
};

int M_stack::isEmpty(){
    if(len==-1){
        return 1;
    }
    return 0;
}
int M_stack::size(){
    return len+1;
}
int M_stack::top(){
    if(isEmpty()){
        return -1;
    }
    return arr[len];
}
int M_stack::pop(){
    if(isEmpty()){
        return -1;
    }
    return arr[len--];
}
void M_stack::push(int num){
    arr[++len]=num;
}

int main(){
    map<string,int>cmd;
    M_stack M_st;
    cmd["push"]=0;
    cmd["pop"]=1;
    cmd["size"]=2;
    cmd["empty"]=3;
    cmd["top"]=4;
    int n,tmp;
    string cmd_in;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cmd_in;
        switch(cmd[cmd_in]){
            case 0:
                cin>>tmp;
                M_st.push(tmp);
                break;
            case 1:
                cout<<M_st.pop()<<endl;
                break;
            case 2:
                cout<<M_st.size()<<endl;
                break;
            case 3:
                cout<<M_st.isEmpty()<<endl;
                break;
            case 4:
                cout<<M_st.top()<<endl;
                break;   
        }
    }
    return 0;
}