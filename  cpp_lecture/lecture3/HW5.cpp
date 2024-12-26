#include<iostream>
#include<string.h>
using namespace std;

typedef struct Savings{
    int w500;
    int w100;
    int w50;
    int w10;
}Savings;

void init(Savings &s);
void input(int &unit,int &cnt);
void save(Savings &s,int unit,int cnt);
int total(Savings &s);

int main(){
    Savings coinBox;
    int unit,cnt,total;
    init(coinBox);
    while(1){
        input(unit,cnt);
        if(unit<0){
            break;
        }
        else{
            save(coinBox,unit,cnt);
        }
    }
    cout<<"총 저금액 : "<<total<<endl;
    return 0;
}
void init(Savings &s){
    s.w500=0;
    s.w100=0;
    s.w50=0;
    s.w10=0;
}
void input(int &unit,int &cnt){
    char money[4][4]={"500","100","50","10"};
    char inmoney[10];
    int i;
    do{
        cout<<"동전의 금액 : ";
        cin>>inmoney;
        for(i=0;i<4;i++){
            if(strcmp(inmoney,money[i])==0){
                break;
            }
        }
    }while(i==4);
    cout<<"동전의 개수 : ";
    cin>>cnt;
    switch(i){
        case 0:
            unit=500;
            break;
        case 1:
            unit=100;
            break;
        case 2:
            unit=50;
            break;
        case 3:
            unit=10;
            break;
        default:
            cout<<"error"<<endl;
    }
}
void save(Savings &s,int unit,int cnt){
    switch(unit){
        case 500:
            s.w500+=cnt;
            break;
        case 100:
            s.w100+=cnt;
            break;
        case 50:
            s.w50+=cnt;
            break;
        case 10:
            s.w10+=cnt;
            break;
        default:
            cout<<"error"<<endl;
    }
}
int total(Savings &s){
    int total=s.w500*500+s.w100*100+s.w50*50+s.w10*10;
    return total;
}
