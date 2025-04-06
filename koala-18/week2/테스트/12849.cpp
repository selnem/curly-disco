#include<iostream>
#define div 1000000007
using namespace std;
typedef long long LL;
bool mapp[8][8]={0};
LL dp[100001][8]={0};
LL dp_recur(int d,int pos);
int main(){

    mapp[0][1]=mapp[0][2]=true;
    mapp[1][0]=mapp[1][2]=mapp[1][3]=true;
    mapp[2][0]=mapp[2][1]=mapp[2][3]=mapp[2][4]=true;
    mapp[3][1]=mapp[3][2]=mapp[3][4]=mapp[3][5]=true;
    mapp[4][2]=mapp[4][3]=mapp[4][5]=mapp[4][6]=true;
    mapp[5][3]=mapp[5][4]=mapp[5][7]=true;
    mapp[6][4]=mapp[6][7]=true;
    mapp[7][5]=mapp[7][6]=true;
    int d;
    cin>>d;
    LL cnt=0;
    for(int i=0;i<8;i++){ 
        if(mapp[0][i]){
            cnt+=dp_recur(d-1,i)%div;
        }
    }
    cout<<cnt%div<<endl;
    return 0;

}
LL dp_recur(int d,int pos){
    if(d==0){
        if(pos==0){
            return 1;
        }
        return 0;
    }
    if(dp[d][pos]){
        return dp[d][pos];
    }
    for(int i=0;i<8;i++){
        if(mapp[pos][i]){
            dp[d][pos]+=dp_recur(d-1,i)%div;
        }
    }
    return dp[d][pos]%div;
}

