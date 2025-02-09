#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    while(1){
        getline(cin,line);
        if(cin.eof()){
            break;
        }
        cout<<line<<endl;
    }
    return 0;
}