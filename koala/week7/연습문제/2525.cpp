#include<iostream>
using namespace std;
int main(){
    int hour,min;
    int time;
    cin>>hour>>min>>time;
    hour+=time/60;
    time%=60;
    min+=time;
    if(min>=60){
        hour+=min/60;
        min%=60;
    }
    hour%=24;
    cout<<hour<<' '<<min;
    return 0;
}