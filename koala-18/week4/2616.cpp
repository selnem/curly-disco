#include<iostream>
#define t_cnt 3
using namespace std;
int N,M;
int dp[t_cnt][50001]={0};
int dp_train(int *prifix,int cnt=0,int s_idx=1);
int main(){
    cin>>N;
    int* train=new int[N+1];//기차 객실배열
    int* prifix=new int[N+1];//누적합배열
    
    for(int i=0;i<N+1;i++){
        train[i]=0;
        prifix[i]=0;
    }
    for(int i=1;i<=N;i++){
        cin>>train[i];
    }
    cin>>M;
    for(int i=1;i<=N;i++){//누적합 계산
        prifix[i]=prifix[i-1]+train[i];
    }

    cout<<dp_train(prifix);

    delete[] train;
    delete[] prifix;
    train=NULL;
    prifix=NULL;
    return 0;
}
int dp_train(int *prifix,int cnt,int s_idx){//누적합 배열,기차선택횟수,시작인덱스
    if(s_idx+M-1>N||cnt==t_cnt){//3번째 기차까지 다고르거나 고를수 있는 기차 길이가 없을때
        return 0;
    }
    if(dp[cnt][s_idx]){//이미 구한적 있다면 그대로 반환
        return dp[cnt][s_idx];
    }
    dp[cnt][s_idx]=max(dp_train(prifix,cnt,s_idx+1),dp_train(prifix,cnt+1,s_idx+M)+prifix[s_idx+M-1]-prifix[s_idx-1]);
    //다음인덱스부터 M칸 선택하거나 현재 인덱스에서 M칸 선택한것 중 더 큰 경우 선택=>현재 인덱스에서 (t_cnt-cnt)개의 기차를 사용한 것중 가장 큰값을 저장
    //누적합을 통해 연속하는 M칸 길이의 기차 인원 합을 구함
    return dp[cnt][s_idx];
}