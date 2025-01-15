#include<iostream>
using namespace std;
//영진,랑이,메리 3명에서 닭고기 N개 나눠먹는다. 남기면 안된다. 각자 하나 이상 먹어야한다. 영진>=랑이>메리 서열을 지켜야 한다.
//영진+랑이%3==0

int main(){
    int N=10;
    int cnt=0;
    for(int y=1;y<=N;y++){
        for(int l=1;l<=N;l++){
            for(int m=1;m<=N;m++){
                if(y+l+m!=N){
                    continue;
                }
                if(!(y>=l&&l>m)){
                    continue;
                }
                if((y+l)%3!=0){
                    continue;
                }
                cout<<y<<' '<<l<<' '<<m<<endl;
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}