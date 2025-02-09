#include<iostream>
#include<string>
using namespace std;
const int base='A'-1;
int score(string &line);
int main(){
    string line;
    int n;
    cin>>n;
    cin>>line;
    cout<<score(line);

    return 0;
}
int score(string &line){
    int score=0;
    for(int i=0;i<line.length();i++){
        score+=(int)line[i]-base;
    }
    return score;
}
