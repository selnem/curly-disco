#include<iostream>
#include<string>
using namespace std;
bool isUpper(char c);
int main(){
    string line;
    cin>>line;
    for(int i=0;i<line.length();i++){
        if(isUpper(line[i])){
            cout<<(char)(line[i]+32);
        }
        else{
            cout<<(char)(line[i]-32);
        }
    }
    return 0;

}
bool isUpper(char c){
    return 'A'<=c&&c<='Z';
}