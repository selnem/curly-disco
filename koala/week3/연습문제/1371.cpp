#include<iostream>
using namespace std;
bool in_range(char t);
int main(){
    int cnt_arr[150]={0};
    int m_cnt=-1;
    char tmp;
    while(1){
        cin>>tmp;
        if(cin.eof()){
            break;
        }
        if(in_range(tmp)){
            cnt_arr[tmp]++;
            m_cnt=max(m_cnt,cnt_arr[tmp]);
        }
    }
    for(int i='a';i<='z';i++){
        if(m_cnt==cnt_arr[i]){
            cout<<(char)i;
        }
    }
    return 0;
}
bool in_range(char t){
    return 'a'<=t&&t<='z';
}