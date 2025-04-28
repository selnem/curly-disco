#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int N,M;
    int s_idx,e_idx,l;
    cin>>N>>M;
    int *g=new int[N+1];
    int *pmtec=new int[N+2];
    memset(pmtec,0,sizeof(int)*(N+2));
    for(int i=1;i<=N;i++){
        cin>>g[i];
    }
    for(int i=0;i<M;i++){
        cin>>s_idx>>e_idx>>l;
        pmtec[s_idx]+=l;
        pmtec[e_idx+1]-=l;
    }
    for(int i=1;i<N+2;i++){
        pmtec[i]=pmtec[i-1]+pmtec[i];
    }
    for(int i=1;i<=N;i++){
        g[i]+=pmtec[i];
    }
    for(int i=1;i<=N;i++){
        cout<<g[i]<<' ';
    }
    delete[]g;
    delete[]pmtec;
    g=NULL;
    pmtec=NULL;
    return 0;
}