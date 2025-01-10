#include<iostream>
using namespace std;
int main(){
    char myMBTI[5];
    cin>>myMBTI;
    if(myMBTI[0]=='E'){
        cout<<"I";
    }
    else{
        cout<<"E";
    }
    if(myMBTI[1]=='S'){
        cout<<"N";
    }
    else{
        cout<<"S";
    }
    if(myMBTI[2]=='T'){
        cout<<"F";
    }
    else{
        cout<<"T";
    }
    if(myMBTI[3]=='J'){
        cout<<"P";
    }
    else{
        cout<<"J";
    }
    return 0;
}