#include<iostream>
#include<algorithm>
using namespace std;

struct OLYMPICS{
    int name,gold,silver,bronze,rank;
};

bool odr_medal(OLYMPICS &a, OLYMPICS &b);
bool odr_name(OLYMPICS &a, OLYMPICS &b);
bool isSame(OLYMPICS &a,OLYMPICS &b);
void ranking(OLYMPICS *list,int N);
OLYMPICS& serch(OLYMPICS *list,int N,int name);
int main(){
    int N,K;
    cin>>N>>K;

    OLYMPICS *list=new OLYMPICS[N];
    for(int i=0;i<N;++i){
        cin>>list[i].name>>list[i].gold>>list[i].silver>>list[i].bronze;
    }
    ranking(list,N);
    cout<<serch(list,N,K).rank;

    delete[] list;
    return 0;
}
bool odr_medal(OLYMPICS &a, OLYMPICS &b){

    if(a.gold==b.gold){
        if(a.silver==b.silver){
            return a.bronze>b.bronze;
        }
        return a.silver>b.silver;
    }
    return a.gold>b.gold;
}
bool odr_name(OLYMPICS &a, OLYMPICS &b){
    return a.name<b.name;
}
bool isSame(OLYMPICS &a,OLYMPICS &b){
    return a.gold==b.gold&&a.silver==b.silver&&a.bronze==b.bronze;
}
void ranking(OLYMPICS *list,int N){
    int start=1;
    sort(list,list+N,odr_medal);
    list[0].rank=start;
    int now=start;
    for(int i=1;i<N;i++){
        ++start;
        if(!isSame(list[i-1],list[i])){
            now=start;
        }
        list[i].rank=now;
    }
}
OLYMPICS& serch(OLYMPICS *list,int N,int name){
    sort(list,list+N,odr_name);
    return list[name-1];
} 