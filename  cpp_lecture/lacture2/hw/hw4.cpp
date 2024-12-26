#include<iostream>
#define BUFF 100
using namespace std;


int my_strlen(const char *line ,char ch='\0');
int main(){
    char ch, line[BUFF];

    cout<<"문자열 입력 : ";
    cin>>line;
    cout<<"문자열 길이 : "<<my_strlen(line)<<endl;
    cout<<"문자 입력 : ";
    cin>>ch;
    cout<<"b이전 까지의 길이 : "<<my_strlen(line,ch)<<endl;

    return 0;
}

int my_strlen(const char *line,char ch){
    int len=0;
    while(1){
        if(line[len]==ch){
            break;
        }
        else{
            len++;
        }
    }
    return len;
}