#include <iostream>
#include<iomanip>//조정자사용하기위한
using namespace std;

int main(){
    int num=10;
    cout<<num<<endl;
    cin>>num;
    cout<<num;

    char name[100];
    cin>>name;
    cout<<name;
    cout<<hex<<num<<endl;
    /*cout.operater<<("c++프로그래밍")명시적 호출 cout 객체에서 연산함수를 호출하여 전달
    cout<<"c++프로그래밍" 암시적 호출 
    c
    pp에서 객체는 구조체형태느낌
 char *app[3]={"app","bpp","cpp"};*/
    return 0;
}