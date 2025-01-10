#include<iostream>
using namespace std;

#define GAN_T 6 // 간달프 종족 종류 숫자
#define SAU_T 7 // 사우론 종족 종류 숫자

const int G_arr[GAN_T]={1,2,3,3,4,10};//간달프 종족 점수
const int S_arr[SAU_T]={1,2,2,2,3,5,10};//사우론 종족 점수

int battle_result();//간달프 승리시0,사우론1,비김2

int main(){
    //전투 결과 대사 0간달프승,1사우론승,2비김
    const char* battle_log[3]={"Good triumphs over Evil","Evil eradicates all trace of Good","No victor on this battle field"};
    int Battle;//전투횟수
    cin>>Battle;
    for(int i=0;i<Battle;i++){
        cout<<"Battle "<<i+1<<": "<<battle_log[battle_result()]<<endl;
    }
    return 0;
}


int battle_result(){
    int temp,G_score=0,S_score=0;
    
    for(int i=0;i<GAN_T;i++){
        cin>>temp;
        G_score+=temp*G_arr[i];
    }
    for(int i=0;i<SAU_T;i++){
        cin>>temp;
        S_score+=temp*S_arr[i];
    }
    if(G_score>S_score){
        return 0;
    }
    else if(G_score<S_score){
        return 1;
    }
    else{
        return 2;
    }
}