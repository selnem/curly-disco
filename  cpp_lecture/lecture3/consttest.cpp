#include<iostream>
using namespace std;
int main(){
    int a=3;
    const int *p=&a;
    int *p2=&a;
    *p2+=2;
    cout<<*p<<endl<< *p2;
    return 0;
}