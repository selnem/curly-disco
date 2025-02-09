#include<iostream>
#include<string>
using namespace std;
int main(){
    char temp;
    int cnt_arr[150]={0};
    int max=-1;
    char max_c=0;
    while(1){
        cin>>temp;
        if(cin.eof()){
            break;
        }
        if(temp>='a'){
            temp-=32;
        }
        cnt_arr[temp]++;
    }
    for(int i=0;i<150;i++){
        if(cnt_arr[i]>max){
            max_c=i;
            max=cnt_arr[i];
        }
        else if(cnt_arr[i]==max){
            max_c='?';
        }
    }
    cout<<max_c;
}