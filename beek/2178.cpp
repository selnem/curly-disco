#include<iostream>
using namespace std;
int cnt=0,end=0;

int main(){
    int N,M,temp,index=0;
    cin>>N>>M;
    int **map=new int* [N];
    for(int i=0;i<N;i++){
        map[i]=new int [M];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>map[i][j];
            
        }
    }
}

void find_root(int**map){

}