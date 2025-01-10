#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    int cnt=0;
    while(1){
        getline(cin,line);
        if(line[0]=='#'){
            break;
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<line.length();j++){
                if(line[j]==vowel[i]){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        line.clear();
        cnt=0;
    }
    return 0;
}
    