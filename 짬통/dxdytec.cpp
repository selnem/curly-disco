#include<iostream>
using namespace std;
int main(){
    int i=(1<<30);//(부호따지는놈)1000000....00000000(숫자1)2^30 숫자범위가 long long 64bit 최솟값을 구하고싶은데 범위가 5억단위 1<<60=>2^60
    cout<<i;
    //1<<30 -(1<<30) 0, -1 long long +-(1<<61)
    //파이썬 다른게뭐냐면 각자료형마다 최대 크기가 정해져있다! 4byte
}