#include<iostream>
#include<queue>
using namespace std;


const int dx[4]={-1,0,1,0};
const int dy[4]={0,-1,0,1};
queue <pair<int,int> > q;

int cabbage(bool**arr,bool **vis,int n,int m);
bool in_range(int N,int M,int r,int c);
void flood_fill(bool **arr,bool **vis,int r,int c,int n,int m);

int main(){
    int T,M,N,K;
    int x,y;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>M>>N>>K;
        bool **arr=new bool*[N];
        bool **vis=new bool*[N];
        for(int a=0;a<N;a++){
            arr[a]=new bool[M];
            vis[a]=new bool[M];
        }
        for(int a=0;a<N;a++){
            for(int b=0;b<M;b++){
                arr[a][b]=false;
                vis[a][b]=false;
            }
        }
        for(int s=0;s<K;s++){
           cin>>x>>y;
           arr[y][x]=true; 
        }
        cout<<cabbage(arr,vis,N,M)<<endl;

        for(int j=0;j<N;j++){
            delete[] arr[j];
            delete[] vis[j];
        }
        
        delete[] arr;
        delete[] vis;
    }
    return 0;
}



bool in_range(int N,int M,int r,int c){
    return 0<=r&&r<N&&0<=c&&c<M;
}

int cabbage(bool**arr,bool **vis,int n,int m){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&arr[i][j]){
                flood_fill(arr,vis,i,j,n,m);
                cnt++;
            }
        }
    }
    return cnt;
}
void flood_fill(bool **arr,bool **vis,int r,int c,int n,int m){
    vis[r][c]=true;
    q.push(pair<int,int>(r,c));
    while(!q.empty()){
        int y=q.front().first;
        int x=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(in_range(n,m,ny,nx)){
                if(!vis[ny][nx]&&arr[ny][nx]){
                    vis[ny][nx]=true;
                    q.push(pair<int,int>(ny,nx));  
                }
            }
        }
    }
}