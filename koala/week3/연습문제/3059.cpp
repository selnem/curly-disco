#include<iostream>
#include<string>
using namespace std;
int not_in(string &line);
int main(){
    int n;
    string line;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>line;
        cout<<not_in(line)<<endl;
    }
    return 0;
}
int not_in(string &line){
    int cnt_arr[91]={0};
    int score=0;
    for(int i=0;i<line.length();i++){
        cnt_arr[line[i]]++;
    }
    for(int i='A';i<='Z';i++){
        if(!cnt_arr[i]){
            score+=i;
        }
    }
    return score;
}