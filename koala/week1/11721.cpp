#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    int index=0;
    cin>>line;
    while(index<line.length()){
        if((index+1)%10){
            cout<<line[index];
        }
        else{
            cout<<line[index]<<endl;
        }
        index++;
    }
    return 0;
}