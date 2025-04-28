#include<iostream>
using namespace std;
int fuc_1(int a);
int *fuc_2(int *a);
int main(){
    int x=5;
    int *b=fuc_2(&x);
    *b+=2;
    cout<<x;
    return 0;
}

int fuc_1(int a){
    a+=1;
    return a;
}
int *fuc_2(int *a){
    *a+=1;
    return a;
}