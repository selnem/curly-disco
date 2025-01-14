#include<iostream>
#include<string>
#define CH_IN 48
using namespace std;

int Rev_num(string &st_num);

int main(){
    string st_n1,st_n2;
    cin>>st_n1>>st_n2;

    int in_n1=Rev_num(st_n1),in_n2=Rev_num(st_n2);
    cout<<(in_n1 > in_n2 ? in_n1:in_n2);

    return 0;
}

int Rev_num(string &st_num){
    int in_n=0,digits=1;
    for(int i=0;i<st_num.length();i++){
        in_n+=digits*(st_num[i]-CH_IN);
        digits*=10;
    }
    return in_n;
}