#include<iostream>
#include<queue>
using namespace std;
int R,C;
char map[250][250]={0};
bool vis[250][250]={0};
int cnt[2]={0};
queue< pair<int,int> > q;

const int dr[4]={1,0,-1,0};
const int dc[4]={0,-1,0,1};

bool in_range(int r,int c);
void area_serch(int r,int c);
void SW_fuc();

int main(){
    cin>>R>>C;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>map[i][j];
            if(map[i][j]=='o'){
                cnt[0]++;
            }
            else if(map[i][j]=='v'){
                cnt[1]++;
            }
        }
    }
    SW_fuc();
    cout<<cnt[0]<<' '<<cnt[1];

    return 0;
}
bool in_range(int r,int c){
    return 0<=r&&r<R&&0<=c&&c<C;
}
void SW_fuc(){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(vis[i][j]){
                continue;
            }
            area_serch(i,j);            
        }
    }
}
void area_serch(int r,int c){
    int s=0,w=0;
    q.push(pair<int,int>(r,c));
    vis[r][c]=true;
    while(!q.empty()){
        r=q.front().first;
        c=q.front().second;
        q.pop();
        if(map[r][c]=='o'){
            s++;
        }
        else if(map[r][c]=='v'){
            w++;
        }
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(in_range(nr,nc)){
                if(map[nr][nc]!='#'&&!vis[nr][nc]){
                    vis[nr][nc]=true;
                    q.push(pair<int,int>(nr,nc));
                }
            }
        }
    }
    if(s>w){
        cnt[1]-=w;
    }
    else{
        cnt[0]-=s;
    }
}