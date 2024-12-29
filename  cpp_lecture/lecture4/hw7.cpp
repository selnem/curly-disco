#include<iostream>
using namespace std;

typedef struct Goods{
    char item[50];
    int price;
    int year;
    int mon;
    int day;
    int discount;
}Goods;

void input(Goods &s);
void selling_price(Goods &s);
void prn(const Goods &s);
int tot_days(int y,int m,int d);
int leap_check(int year);

int main(){
    Goods prd;
    input(prd);
    selling_price(prd);
    if(prd.discount<0){
        cout<<"유통기한이 지났습니다!"<<endl;
    }
    else{
        prn(prd);
    }

    return 0;
}

void input(Goods &s){
    cout<<"품목 입력:";
    cin>>s.item;
    cin.ignore(50,'\n');
    cout<<"정가 입력 : ";
    cin>>s.price;
    cout<<"유통기한 입력 : ";
    cin>>s.year>>s.mon>>s.day;
}

void selling_price(Goods &s){
    int dayleft=tot_days(s.year,s.mon,s.day);
    if(dayleft<0){
        s.discount=-1;
    }
    else if(dayleft<=3){
        s.discount=50;
    }
    else if(dayleft<=10){
        s.discount=20;
    }
    else{
        s.discount=0;
    }
}
void prn(const Goods &s){
    cout<<"품명 : "<<s.item<<endl;
    cout<<"판매가 : "<<s.price*(100-s.discount)/100<<endl;
    cout<<"유통기한 : "<<s.year<<'-'<<s.mon<<'-'<<s.day<<endl;
    cout<<"할인율 : "<<s.discount<<'%'<<endl;
}
int tot_days(int y,int m, int d){
    int yrTdy=2024,mntTdy=12,dTdy=26,day1=0,day2=0,total;
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