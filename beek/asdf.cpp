#include<iostream>
using namespace std;
int fuc(int a);
int main(){
    int a=10;
    fuc(a);
    cout<<a<<endl;
    cout<<fuc(a)<<endl;

    
}

int fuc(int a){
    a+=1;
    return a;
}