#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string tmp;
    int start=666;
    int cnt=1;
    while(cnt<n){

        tmp=to_string(++start);

        if(tmp.find("666")!=-1){
            cnt++;
        }

    }
    cout<<start;
    return 0;

}