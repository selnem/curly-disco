#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    cin>>line;
    int s_idx;
    int l_cnt=0,r_cnt=0;
    for(int i=0;i<line.length();i++){
        if(line[i]=='0'){
            s_idx=i;
            break;
        }
    }
    int idx=s_idx;
    while(idx>=0){
        if(line[idx]=='@'){
            ++l_cnt;
        }
        --idx;
    }
    idx=s_idx;
    while(idx<line.length()){
        if(line[idx]=='@'){
            ++r_cnt;
        }
        ++idx;
    }
    cout<<l_cnt<<' '<<r_cnt;
    return 0;
}