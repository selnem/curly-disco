#include<iostream>
using namespace std;

void fuc_1(int ***arr,int &N,int &M);
void fuc_2(int ***arr,int &N,int &M);
void fuc_3(int ***arr,int &N,int &M);
void fuc_4(int ***arr,int &N,int &M);
void fuc_5(int ***arr,int &N,int &M);
void fuc_6(int ***arr,int &N,int &M);


int main(){
    int N,M,R;
    cin>>N>>M>>R;
    int **arr=new int*[N];
    for(int i=0;i<N;i++){
        arr[i]=new int [M];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    int cmd;
    for(int i=0;i<R;i++){
        cin>>cmd;
        switch(cmd){
            case 1:
                fuc_1(&arr,N,M);
                break;
            case 2:
                fuc_2(&arr,N,M);
                break;
            case 3:
                fuc_3(&arr,N,M);
                break;
            case 4:
                fuc_4(&arr,N,M);
                break;
            case 5:
                fuc_5(&arr,N,M);
                break;
            case 6:
                fuc_6(&arr,N,M);
                break;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }

    for(int i=0;i<N;i++){
        delete[]arr[i];
    }
    delete[]arr;
    return 0;
}
void fuc_1(int ***arr,int &N,int &M){
    int **temp=new int*[N];
    for(int i=0;i<N;i++){
        temp[i]=new int [M];
    }
    for(int i=N-1;i>=0;--i){
        for(int j=0;j<M;++j){
            temp[N-i-1][j]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    *arr=temp;
}
void fuc_2(int ***arr,int &N,int &M){
    int **temp=new int*[N];
    for(int i=0;i<N;i++){
        temp[i]=new int [M];
    }
    for(int i=0;i<N;++i){
        for(int j=M-1;j>=0;--j){
            temp[i][M-j-1]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    *arr=temp;
}
void fuc_3(int ***arr,int &N,int &M){
    int **temp=new int*[M];
    for(int i=0;i<M;i++){
        temp[i]=new int [N];
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            temp[j][N-i-1]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    int swp;
    swp=N;
    N=M;
    M=swp;
    *arr=temp;
}
void fuc_4(int ***arr,int &N,int &M){
    int **temp=new int*[M];
    for(int i=0;i<M;i++){
        temp[i]=new int [N];
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            temp[M-j-1][i]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    int swp;
    swp=N;
    N=M;
    M=swp;
    *arr=temp;
}
void fuc_5(int ***arr,int &N,int &M){
    int **temp=new int*[N];
    for(int i=0;i<N;i++){
        temp[i]=new int [M];
    }
    for(int i=0;i<N/2;i++){
        for(int j=0;j<M/2;j++){
            temp[i][M/2+j]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N/2;i++){
        for(int j=M/2;j<M;j++){
            temp[N/2+i][j]=(*arr)[i][j];
        }
    }
    for(int i=N/2;i<N;i++){
        for(int j=M/2;j<M;j++){
            temp[i][j-M/2]=(*arr)[i][j];
        }
    }
    for(int i=N/2;i<N;i++){
        for(int j=0;j<M/2;j++){
            temp[i-N/2][j]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    *arr=temp;
}
void fuc_6(int ***arr,int &N,int &M){
    int **temp=new int*[N];
    for(int i=0;i<N;i++){
        temp[i]=new int [M];
    }
    for(int i=0;i<N/2;i++){
        for(int j=0;j<M/2;j++){
            temp[i+N/2][j]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N/2;i++){
        for(int j=M/2;j<M;j++){
            temp[i][j-M/2]=(*arr)[i][j];
        }
    }
    for(int i=N/2;i<N;i++){
        for(int j=M/2;j<M;j++){
            temp[i-N/2][j]=(*arr)[i][j];
        }
    }
    for(int i=N/2;i<N;i++){
        for(int j=0;j<M/2;j++){
            temp[i][j+M/2]=(*arr)[i][j];
        }
    }
    for(int i=0;i<N;i++){
        delete[](*arr)[i];
    }
    delete[]*arr;
    *arr=temp;
}