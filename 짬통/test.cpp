#include<iostream>
using namespace std;

int leap_check(int year);
int tot_days(int y,int m,int);

int main(){
    const char* days[7]={"mon","tue","wed","thu","fri","sat","sun"};
    int tday=2,dday;
    int m,d;
    cin>>m>>d;
    dday=tot_days(2025,m,d);
    cout<<days[(tday+dday)%7];

    return 0;

}
int tot_days(int y,int m, int d){
    int yrTdy=2025,mntTdy=1,dTdy=1,day1=0,day2=0,total;
    int Mdays[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    if(leap_check(yrTdy)){
        for(int i=1;i<mntTdy;i++){
            day1+=Mdays[1][i];
        }
    }
    else{
        for(int i=1;i<mntTdy;i++){
            day1+=Mdays[0][i];
        }
    }
    day1+=dTdy;
    if(leap_check(y)){
        for(int i=1;i<m;i++){
            day2+=Mdays[1][i];
        }
    }
    else{
        for(int i=1;i<m;i++){
            day2+=Mdays[0][i];
        }
    }
    day2+=d;
    total=day2-day1;
    if(yrTdy-y>0){
        for(int i=y;y<yrTdy;i++){
            total-=365+leap_check(i);
        }
    }
    else if(yrTdy-y<0){
        for(int i=yrTdy;i<y;i++){
            total+=365+leap_check(i);
        }
    }

    //cout<<total<<endl;
    return total;


}
int leap_check(int year){
    if(year%4==0){
        if(year%100==0&&year%400!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}