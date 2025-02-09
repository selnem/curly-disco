#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    char arr[10][100];
    cin>>line;
    int R,C,N;
    N=line.length();
    for(R=10;R>=1;--R){
        for(C=R;C*R<=N;++C){
            if(C*R==N){
                break;
            }
        }
        if(C*R==N){
            break;
        }
    }
    int idx=0;
    
    for(int j=0;j<C;++j){
        for(int i=0;i<R;++i){
            arr[i][j]=line[idx++];
        }
    }
    for(int i=0;i<R;++i){
        for(int j=0;j<C;++j){
            cout<<arr[i][j];    
        }
    }
    return 0;
}