#include<iostream>
using namespace std;
int w,h;
int map[50][50];
bool vis[50][50];


int dr[8]={-1,0,1,0,1,-1,-1,1};
int dc[8]={0,-1,0,1,1,-1,1,-1};

bool in_range(int r,int c);
int island_cnt();
void f_fill(int r,int c);
void reset();

int main(){
    while(1){
        cin>>w>>h;
        if(w==0&&h==0){
            break;
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>map[i][j];
            }
        }
        cout<<island_cnt()<<endl;
        reset();
    }
    return 0;
}
void reset(){
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            map[i][j]=0;
            vis[i][j]=false;
        }
    }
}
bool in_range(int r,int c){
    return 0<=r&&r<h&&0<=c&&c<w;
}
int island_cnt(){
    int cnt=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(map[i][j]&&!vis[i][j]){
                cnt++;
                f_fill(i,j);
            }
        }
    }
    return cnt;
}
void f_fill(int r,int c){
    vis[r][c]=true;
    for(int i=0;i<8;i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(in_range(nr,nc)){
            if(map[nr][nc]&&!vis[nr][nc]){
                vis[nr][nc]=true;
                f_fill(nr,nc);
            }
        }
    }
    
}