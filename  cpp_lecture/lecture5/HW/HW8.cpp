#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int min;
    public:
        Time();
        Time(int h,int m);
        Time(double t);
        Time(const Time &tr);
        Time plus(const Time &tr);
        inline void setHour(int h);
        inline int getHour();
        inline void setMin(int m);
        inline int getMin();
};

Time::Time(){
    hour=0;
    min=0;
}

Time::Time(int h,int m){
    hour=h;
    min=m;
}

Time::Time(double t){
    hour=(int)t;
    min=60*(t-(int)t);
}
Time::Time(const Time &tr){
    hour=tr.hour;
    min=tr.min;
}
Time Time::plus(const Time &tr){
    Time tmp (this->hour+tr.hour+((tr.min+this->min)/60),(this->min+tr.min)%60);
    return tmp;
}

inline void Time::setHour(int h){
    hour=h;
}

inline int Time::getHour(){
    return hour;
}

inline void Time::setMin(int m){
    hour+=m/60;
    min=m%60;
}

inline int Time::getMin(){
    return min; 
}


int main(){
    Time a(3,20),b;
    cout<<a.getHour()<<"시간 "<<a.getMin()<<"분"<<endl;
    b.setHour(4);
    b.setMin(42);
    cout<<b.getHour()<<"시간 "<<b.getMin()<<"분"<<endl;
    Time res=a.plus(b);
    cout<<"두 시간을 더하면 : "<<res.getHour()<<"시간 "<<res.getMin()<<"분"<<endl;
    return 0;
}