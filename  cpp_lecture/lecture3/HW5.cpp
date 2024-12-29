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
    int unit,cnt;
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
    cout<<"총 저금액 : "<<total(coinBox)<<endl;
    return 0;
}
void init(Savings &s){
    s.w500=0;
    s.w100=0;
    s.w50=0;
    s.w10=0;
}
void input(int &unit,int &cnt){
    int coins[4]={500,100,50,10};

    while(1){
        cout<<"동전의 금액 : ";
        cin>>unit;
        if(cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }
        else if(unit<0){
            break;
        }
        else{
            int i;
            for(i=0;i<4;i++){
                if(unit==coins[i]){
                    break;
                }
            }
            if(i!=4){
                cout<<"동전의 개수 : ";
                cin>>cnt;
                break;
            }
        }
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
    return s.w500*500+s.w100*100+s.w50*50+s.w10*10;
}
