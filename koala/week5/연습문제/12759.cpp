#include<iostream>
using namespace std;

bool isWin(int arr[][3]);

int main(){
    int arr[3][3]={0};
    int start;
    cin>>start;
    start--;
    int r,c;
    for(int i=0;i<9;i++){
        cin>>r>>c;
        arr[r-1][c-1]=(start++)%2+1;
        if(isWin(arr)){
            cout<<arr[r-1][c-1];
            return 0;
        }
    }
    cout<<0;
    return 0;
}

bool isWin(int arr[][3]){
    if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])&&(arr[0][0]!=0)){
        return true;
    }
    if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])&&(arr[0][2]!=0)){
        return true;
    }
    for(int i=0;i<3;i++){
        if((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2])&&(arr[i][0]!=0)){
            return true;
        }
        if((arr[0][i]==arr[1][i])&&(arr[1][i]==arr[2][i])&&(arr[0][i]!=0)){
            return true;
        }
    }
    return false;
}