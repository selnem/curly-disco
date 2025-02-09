#include<iostream>
using namespace std;
int main(){
    const char *prn[2]={"Bad","Good"};
    int temp1,temp2;
    bool less=true;
    cin>>temp1;
    while(cin>>temp2){
        if(temp2<temp1){
            less=false;
        }
        temp1=temp2;
    }
    cout<<prn[less];
    return 0;
}