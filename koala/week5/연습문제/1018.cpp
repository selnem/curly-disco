#include<iostream>
using namespace std;
int cutter(char**bord,int N,int M);
int b_cnt(char**bord,int r,int s);
int w_cnt(char**bord,int r,int s);
int main(){
    int N,M;
    cin>>N>>M;
    char **bord=new char*[N];
    for(int i=0;i<N;i++){
        bord[i]=new char[M];    
    }

    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>bord[i][j];
        }
    }
    cout<<cutter(bord,N,M);
    for(int i=0;i<N;i++){
        delete[] bord[i];
    }
    delete[] bord;

}

int cutter(char**bord,int N,int M){
    int m_cnt=64;
    int temp;
    for(int i=0;i<=N-8;i++){
        for(int j=0;j<=M-8;j++){
            temp=min(w_cnt(bord,i,j),b_cnt(bord,i,j));
            m_cnt=min(m_cnt,temp);
        }
    }
    return m_cnt;
}
int w_cnt(char**bord,int r,int s){
    int cnt=0;
    for(int i=r;i<r+8;++i){
        for(int j=s;j<s+8;++j){
            if((i+j)%2==(r+s)%2){
                if(bord[i][j]=='W'){
                    continue;
                }
                cnt++;
            }
            else{
                if(bord[i][j]=='B'){
                    continue;
                }
                cnt++;
            }
        }
    }
    return cnt;
}
int b_cnt(char**bord,int r,int s){
    int cnt=0;
    for(int i=r;i<r+8;++i){
        for(int j=s;j<s+8;++j){
            if((i+j)%2==(r+s)%2){
                if(bord[i][j]=='B'){
                    continue;
                }
                cnt++;
            }
            else{
                if(bord[i][j]=='W'){
                    continue;
                }
                cnt++;
            }
        }
    }
    return cnt;
}