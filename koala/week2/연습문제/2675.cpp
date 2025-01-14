#include<iostream>
#include<string>
using namespace std;

void M_prn(string &line,int n);

int main(){
    int N,R;
    string line;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>R>>line;
        M_prn(line,R);
    }
    return 0;
}

void M_prn(string &line,int n){
    for(int i=0;i<line.length();i++){
        for(int j=0;j<n;j++){
            cout<<line[i];
        }
    }
    cout<<'\n';
}

