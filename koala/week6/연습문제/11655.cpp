#include<iostream>
#include<string>
using namespace std;

inline bool isUpper(char c);
inline bool isLower(char c);

int main(){
    string line;
    getline(cin,line);
    for(int i=0;i<line.length();++i){
        if(isUpper(line[i])){
            cout<<(char)((line[i]+13-'A')%26+'A');
        }
        else if(isLower(line[i])){
            cout<<(char)((line[i]+13-'a')%26+'a');
        }
        else{
            cout<<line[i];
        }
    }
    return 0;
}
inline bool isUpper(char c){
    return'A'<=c&&c<='Z';
}
inline bool isLower(char c){
    return 'a'<=c&&c<='z';
}
