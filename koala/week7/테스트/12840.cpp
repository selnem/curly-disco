#include<iostream>
using namespace std;
struct T{
    int h,m,s;
};
void Fwd(T &tm,int t);
void Rwd(T &tm,int t);
int main(){
    int q,cmd,t;
    T tm;

    cin>>tm.h>>tm.m>>tm.s;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>cmd;
        switch(cmd){
            case 1:
                cin>>t;
                Fwd(tm,t);
                break;
            case 2:
                cin>>t;
                Rwd(tm,t);
                break;
            case 3:
                cout<<tm.h<<' '<<tm.m<<' '<<tm.s<<'\n';
                break;
        }
    }
}
void Fwd(T &tm,int t){
    tm.h+=t/3600;
    t%=3600;
    tm.m+=t/60;
    t%=60;
    tm.s+=t;
    if(tm.s>=60){
        tm.m+=tm.s/60;
        tm.s%=60;
    }
    if(tm.m>=60){
        tm.h+=tm.m/60;
        tm.m%=60;
    }
    tm.h%=24;    
}
void Rwd(T &tm,int t){
    tm.h-=t/3600;
    t%=3600;
    tm.m-=t/60;
    t%=60;
    tm.s-=t;
    if(tm.s<0){
        tm.m--;
        tm.s+=60;
    }
    if(tm.m<0){
        tm.h--;
        tm.m+=60;
    }
    while(tm.h<0){
        tm.h+=24;
    }  
}
