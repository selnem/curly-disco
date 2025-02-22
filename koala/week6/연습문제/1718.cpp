#include<iostream>
#include<string>
using namespace std;

inline bool isAlphabet(char c);

int main(){
    string cypt;
    string line;
    getline(cin,line);
    getline(cin,cypt);
    char temp;
    for(int i=0;i<line.length();i++){
        if(isAlphabet(line[i])){
            temp=line[i]-'a';
            temp-=(cypt[i%cypt.length()]-'a'+1);
            if(temp<0){
                temp+=26;
            }
            temp+='a';
            cout<<temp;
        }
        else{
            cout<<line[i];
        }
    }
    return 0;


}
inline bool isAlphabet(char c){
    return 'a'<=c&&c<='z';
}