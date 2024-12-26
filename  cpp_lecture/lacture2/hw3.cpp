#include<iostream>
using namespace std;
void str_prn(const char*line,int a=-1);
int main(){
    char str[80];
    cout<< "문장 입력 : ";
    cin.getline(str, sizeof(str));
    char ch;
    cout<< "문자 입력 : ";
    cin>>ch;
    str_prn(str);
    str_prn(str, ch);
    return 0;
}
void str_prn(const char*line,int a){
    int i=0;
    char c;
    if(a==-1){
        cout<<line<<endl;
    }
    else{
        while(1){
            if((c=line[i++])!=(char)a){
                cout<<c;
            }
            else{
                break;
            }
        }
    }
}