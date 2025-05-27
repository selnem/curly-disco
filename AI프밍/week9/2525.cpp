#include <iostream>
using namespace std;

int main(){
    int hour,min,time,h,m=0;
    cin >> hour >> min >> time;

    if (min+time<60){
        min=min+time;
    }
    else {
        if (hour==23){
            hour=0;
            h=(min+time)/60;
            hour=h-1;
        }
        else {
            h=(min+time)/60;
            hour=hour+h;
        }
        
        m=(min+time)%60;
        min=0;
        min=min+m;
    }

    cout << hour << " " << min;
    return 0;
}