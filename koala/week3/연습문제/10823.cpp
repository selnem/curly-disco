#include<iostream>
using namespace std;
int main(){
    char tmp;
    int sum=0;
    int num=0;
    while(1){
        cin>>tmp;
        if(cin.eof()){
            sum+=num;
            break;
        }
        if('0'<=tmp&&tmp<='9'){
            num=num*10+tmp-'0';
        }
        else{
            sum+=num;
            num=0;
        }
    }
    cout<<sum;
    return 0;
}