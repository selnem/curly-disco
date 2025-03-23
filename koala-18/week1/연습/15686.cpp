#include<iostream>
#include<vector>
using namespace std;
int chick_d=1<<30;

vector< pair<int,int> >chick;//치킨집 위치들 배열
vector< pair<int,int> > house;//가정집 위치들 배열
pair<int,int> *survived;//살아남은 치킨집 위치들 배열

void recur( int m,int cnt=0,int s=0);//백트래킹 함수

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    survived = new pair<int,int>[m];//살아남은 치킨집 배열 동적할당
   
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            if(tmp==1){
                house.push_back(make_pair(i,j));
            }
            if(tmp==2){
                chick.push_back(make_pair(i,j));
            }
        }
    }
    recur(m);
    cout<<chick_d;
    delete[]survived;
    return 0;
    
}

void recur(int m,int cnt,int s){
    if(cnt==m){//m개의 치킨집을 선정 하였다면 정답 판별 함수 탈출시작 조건문
        int dist=0;//도시의 치킨거리
        for(int i=0;i<house.size();i++){
            int minn=1<<30;// i번째 집의 가장가까운 치킨집과의 거리 변수
            for(int j=0;j<m;j++){//각 집별 가장 가까운 치킨집 거리 찾기
                minn=min(minn,abs(house[i].first-survived[j].first)+abs(house[i].second-survived[j].second));
            }
            dist+=minn;//각각 집별로 가장 가까운 치킨집과의 거리 모두 더하여 치킨 거리 계산
        }
        chick_d=min(chick_d,dist);//해당 분기 치킨 거리가 가장 작은 치킨 거리인지 판단 이후 저장
        return;
    }

    for(int i=s;i<chick.size()-m+cnt+1;i++){// 살려둘 치킨집 선정할 반복문
        survived[cnt]=chick[i];//살려둘 치킨집을 배열에 저장
        recur(m,cnt+1,i+1);// 다음 살려둘 치킨집 선정 및 정답 판별할 재귀 호출
    }

}
