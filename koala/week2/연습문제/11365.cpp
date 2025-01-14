#include<iostream>
#include<string>
using namespace std;

void Rev_prn(string &line);

int main(){
    string line;
    while(1){
        getline(cin,line);
        if(line.compare("END")==0){
            break;
        }
        Rev_prn(line);
    }
    return 0;
}

void Rev_prn(string &line){
    for(int i=line.length()-1;i>=0;i--){
        cout<<line[i];
    }
    cout<<'\n';
}

