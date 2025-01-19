#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    string temp;
    while(!cin.eof()){
        cin>>temp;
        cnt++;
    }
    cout<<cnt-1;
    return 0;
}