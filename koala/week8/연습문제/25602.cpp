#include<iostream>
using namespace std;
int can[5];
int m_can[4][5];
int l_can[4][5];
int ans=0;
int can_cnt[5]={0};
void score(int n,int k,int cnt=0,int lsum=0,int msum=0);
int main(){
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>can[i];
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            cin>>l_can[i][j];
        }
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            cin>>m_can[i][j];
        }
    }
    score(N,K);
    cout<<ans;
    return 0;    
}
void score(int n,int k,int cnt,int lsum,int msum){
    if(cnt==k){
        ans=max(ans,lsum+msum);
        return;
    }
    for(int i=0;i<n;i++){
        if(can[i]<=can_cnt[i]){
            continue;
        }can_cnt[i]++;
        for(int j=0;j<n;j++){
            if(can[j]<=can_cnt[j]){
                continue;
            }
            
            can_cnt[j]++;
            score(n,k,cnt+1,lsum+l_can[cnt][i],msum+m_can[cnt][j]);
            can_cnt[j]--;
        }
        can_cnt[i]--; 
    }
}