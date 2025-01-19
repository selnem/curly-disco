#include<iostream>
using namespace std;
int score_prn(string &line);
int main(){
    string line;
    int score=0,total=0,N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>line;
        cout<<score_prn(line)<<'\n';
    }
    return 0;
}
int score_prn(string &line){
    int score=0,total=0;
    for(int i=0;i<line.length();i++){
        if(line[i]=='O'){
            score++;
            total+=score;
        }
        else{
            score=0;
        }
    }
    return total;
}