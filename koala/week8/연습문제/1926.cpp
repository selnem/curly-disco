#include<iostream>
using namespace std;

const int dx[4]={-1,0,1,0};
const int dy[4]={0,-1,0,1};
int s_tmp=1;
int s_ans=0;
int cnt=0;

bool** arr_init(int N,int M);
void f_fill(bool **map,bool **vis,int r,int c,int n,int m);
void pic_fuc(bool **map,bool **vis,int n,int m);
bool in_range(int r,int c,int n,int m);

int main(){
    int N,M;
    cin>>N>>M;
    bool **map=arr_init(N,M);
    bool **vis=arr_init(N,M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>map[i][j];
        }
    }
    pic_fuc(map,vis,N,M);
    cout<<cnt<<'\n'<<s_ans;

    for(int i=0;i<N;i++){
        delete[]map[i];
        delete[]vis[i];
    }
    delete[]map;
    delete[]vis;
    return 0;
}
bool** arr_init(int N,int M){
    bool **arr=new bool*[N];
    for(int i=0;i<N;i++){
        arr[i]=new bool[M];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            arr[i][j]=false;
        }
    }
    return arr;
}
void f_fill(bool **map,bool **vis,int r,int c,int n,int m){
    vis[r][c]=true;
    for(int i=0;i<4;i++){
        int nr=r+dy[i];
        int nc=c+dx[i];
        if(in_range(nr,nc,n,m)){
            if(map[nr][nc]&&!vis[nr][nc]){
                s_tmp++;
                vis[nr][nc]=true;
                f_fill(map,vis,nr,nc,n,m);
            }
        }
    }
}
void pic_fuc(bool **map,bool **vis,int n,int m){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j]&&!vis[i][j]){
                cnt++;
                f_fill(map,vis,i,j,n,m);
                s_ans=max(s_ans,s_tmp);
                s_tmp=1;
            }
        }
    }
}
bool in_range(int r,int c,int n,int m){
    return 0<=r&&r<n&&0<=c&&c<m;
}