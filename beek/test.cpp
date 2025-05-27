#include<iostream>
using namespace std;

int fuc1();
int fuc2();



int fuc1(){
    int a=10;
    a+=fuc2();
    return a;
}
int fuc2(){
    int b=5;
    return b;
}