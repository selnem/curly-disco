#include<iostream>
#include<string>
using namespace std;

int main(){
    string lines[5];
    int max_l=-1;
    for(int i=0;i<5;i++){
        cin>>lines[i];
        max_l=max(max_l,(int)lines[i].length());
    }
    for(int i=0;i<max_l;i++){
        for(int j=0;j<5;j++){
            if(i>=lines[j].length()){
                continue;
            }
            cout<<lines[j][i];
        }
    }
    return 0;
}