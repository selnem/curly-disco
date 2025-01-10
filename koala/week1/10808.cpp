//알파벳 개수
#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cin>>line;
    int cnt;
    int arr[122-97+1];
    for(int i=97;i<=122;i++){
        for(int j=0;j<line.length();j++){
            if(line[j]==(char)i){
                cnt++;
            }
        }
        cout<<cnt<<" ";
        cnt=0;
    }
    return 0;
}