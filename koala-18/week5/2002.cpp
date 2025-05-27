#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    unordered_map<string,int>inCar;
    int overTakeCnt=0;
    cin>>N;
    string carNum;
    string tmp;
    int *outCar=new int [N];
    
    for(int i=0;i<N;i++){
        cin>>carNum;
        inCar[carNum]=i;
    }
    for(int i=0;i<N;i++){
        cin>>tmp;
        outCar[i]=inCar[tmp];
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(outCar[i]>outCar[j]){
                overTakeCnt++;
                break;
            }
        }
    }
    cout<<overTakeCnt;
    
    return 0;
}