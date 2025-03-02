#include<iostream>
using namespace std;
int main(){
    int n;
    int t1=0,t2=0;
    int min,sec,team,befor;
    int score[3]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %d:%d",&team,&min,&sec);
        if(score[1]>score[2]){
            t1+=(min*60)+sec-befor;
        }
        else if(score[1]<score[2]){
            t2+=(min*60)+sec-befor;
        }
        befor=(min*60)+sec;
        ++score[team];
    }
    if(score[1]>score[2]){
        t1+=48*60-befor;
    }
    else if(score[1]<score[2]){
        t2+=48*60-befor;
    }
    printf("%02d:%02d\n",t1/60,t1%60);
    printf("%02d:%02d",t2/60,t2%60);
    return 0;
}