#include<iostream>
#include<vector>
using namespace std;
struct RC{
    int r,c;
};
const int dx[4]={-1,0,1,0};
const int dy[4]={0,-1,0,1};
bool inRange(int r,int c);
void map_print(char **mapp);
bool Sink(char** mapp,int r,int c);
void after_50y(char** mapp);
int R,C;
int main(){
    cin>>R>>C;
    char**mapp=new char*[R];
    for(int i=0;i<R;i++){
        mapp[i]=new char[C];
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mapp[i][j];
        }
    }
    after_50y(mapp);
    map_print(mapp);

    for(int i=0;i<R;i++){
        delete[]mapp[i];
    }
    delete[]mapp;
    return 0;
}
bool inRange(int r,int c){
    return 0<=r&&r<R&&0<=c&&c<C;
}
void after_50y(char** mapp){
    vector<RC>q;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mapp[i][j]=='X'){
                if(Sink(mapp,i,j)){
                    RC tmp;
                    tmp.r=i;
                    tmp.c=j;
                    q.push_back(tmp);
                }
            }
        }
    }
    for(auto &it:q){
        mapp[it.r][it.c]='.';
    }
}
bool Sink(char** mapp,int r,int c){
    int sea=0;
    for(int i=0;i<4;i++){
        int y=r+dy[i];
        int x=c+dx[i];
        if(inRange(y,x)&&mapp[y][x]=='.'){
            sea++;
        }
    }
    if(sea>=3){
        return true;
    }
    else{
        return false;
    }
}
void map_print(char **mapp){
    int rs=R-1;
    int re=0;
    int cs=C-1;
    int ce=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mapp[i][j]=='X'){
                rs=min(rs,i);
                cs=min(cs,j);
                re=max(re,i);
                ce=max(ce,j);
            }
        }
    }
    for(int i=rs;i<=re;i++){
        for(int j=cs;j<ce;j++){
            cout<<mapp[i][j];
        }
        cout<<'\n';
    }
}