#include<iostream>
using namespace std;
struct T{
    int hour,min,sec;
};
int main(){
    T s,e,t;
    scanf("%d:%d:%d",&s.hour,&s.min,&s.sec);
    scanf("%d:%d:%d",&e.hour,&e.min,&e.sec);
    if(s.sec<=e.sec){
        t.sec=e.sec-s.sec;
    }
    else{
        t.sec=60+e.sec-s.sec;
        e.min--;
    }
    if(s.min<=e.min){
        t.min=e.min-s.min;
    }
    else{
        t.min=60+e.min-s.min;
        e.hour--;
    }
    if(s.hour<=e.hour){
        t.hour=e.hour-s.hour;
    }
    else{
        t.hour=24+e.hour-s.hour;
    }

    printf("%02d:%02d:%02d",t.hour,t.min,t.sec);
    return 0;
}