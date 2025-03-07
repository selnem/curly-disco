#include<iostream>
#include<algorithm>
#define SIZE 9
using namespace std;

bool isFind=false;
int dwarfs[7];

void seven_dwarfs(int* arr, int cnt=0,int sum=0,int start=0);
int main(){
    int arr[SIZE];
    for(int i=0;i<SIZE;i++){
        cin>>arr[i];
    }
    sort(arr,arr+SIZE);
    seven_dwarfs(arr);
    return 0;
}

void seven_dwarfs(int* arr, int cnt,int sum,int start){
    if(isFind==true){
        return;
    }
    if(cnt==7){
        if(sum==100){
            isFind=true;
            for(int i=0;i<7;i++){
                cout<<dwarfs[i]<<'\n';
            }
        }
        return;
    }
    for(int i=start;i<SIZE-6+cnt;i++){
        dwarfs[cnt]=arr[i];
        seven_dwarfs(arr,cnt+1,sum+arr[i],i+1);
    }
}