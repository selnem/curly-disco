#include<iostream>
using namespace std;
int main(){
    int hour,min,sec;
    int time;
    cin>>hour>>min>>sec>>time;
    hour+=time/3600;
    time%=3600;
    min+=time/60;
    time%=60;
    sec+=time;
    if(sec>=60){
        min+=sec/60;
        sec%=60;
    }
    if(min>=60){
        hour+=min/60;
        min%=60;
    }
    hour%=24;
    cout<<hour<<' '<<min<<' '<<sec;
    return 0;
}