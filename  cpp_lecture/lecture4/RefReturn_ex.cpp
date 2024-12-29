#include<iostream>
using namespace std;

int &fuc();

int main(){
    fuc()+=10;
    cout<<fuc();
    return 0;
}

int &fuc(){
   static int a=0;
   return a;
}