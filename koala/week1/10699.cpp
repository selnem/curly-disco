#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t t=time(0);
    tm *today=localtime(&t);
    cout<<today->tm_year+1900<<'-';
    cout.width(2);
    cout.fill('0');
    cout<<today->tm_mon+1<<'-';
    cout.width(2);
    cout.fill('0');
    cout<<today->tm_mday;
    return 0;

}