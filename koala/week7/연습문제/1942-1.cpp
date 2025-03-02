#include<iostream>
#include<string>
using namespace std;

class T{
    private:
        int hour,min,sec;
    public:
        T(int hour=0,int min=0,int sec=0): hour(0),min(0),sec(0) {}
        void TimeSet(const string &line);
        T& operator++(){
            ++sec;
            if(sec==60){
                ++min;
                sec=0;
            }
            if(min==60){
                ++hour;
                min=0;
            }
            if(hour==24){
                hour=0;
            }
            return *this;
        }
        friend bool operator == (const T&a,const T&b){
            return a.hour==b.hour&&a.min==b.min&&a.sec==b.sec;
        }
        
        int timeNum(){
            int temp=hour*10000+min*100+sec;
            return temp;
        }
};
void T::TimeSet(const string &line){
    hour=(line[0]-'0')*10+(line[1]-'0');
    min=(line[3]-'0')*10+(line[4]-'0');
    sec=(line[6]-'0')*10+(line[7]-'0');
    
}
int cntMultiply(T s,T e,int m);
int main(){
    string s_line,e_line;
    T s_time,e_time;
    for(int i=0;i<3;i++){
        cin>>s_line>>e_line;
        s_time.TimeSet(s_line);
        e_time.TimeSet(e_line);
        cout<<cntMultiply(s_time,e_time,3)<<'\n';
    }
    return 0;
}
int cntMultiply(T s,T e,int m){
    int cnt=0;
    while(1){
        if(s.timeNum()%m==0){
            ++cnt;
        }
        if(s==e){
            break;
        }
        ++s;
    }
    return cnt;
}