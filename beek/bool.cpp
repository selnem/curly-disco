#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b,p;
    int bA,bB,bP;
    string bArr[2]={"false","true"};
    string pArr[2]={"AND","OR"};
    cin>>a>>p>>b;
    for(bA=0;bA<2;bA++){
        if(a.compare(bArr[bA])==0){
            break;
        }
    }
    for(bB=0;bB<2;bB++){
        if(b.compare(bArr[bB])==0){
            break;
        }
    }
    for(bP=0;bP<2;bP++){
        if(p.compare(pArr[bP])==0){
            break;
        }
    }

    if(bP==0){
        
        cout<<bArr[bA&bB];
    }
    else if(bP==1){
        cout<<bArr[bA|bB];
    }
    else{
        cout<<"error";
    }
    return 0;
}