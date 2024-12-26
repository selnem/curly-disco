#include<iostream>
#define BUFF 50
using namespace std;

double uMax(double a,double b);
char *uMax(char *line1,char *line2);
int strcnt(const char*line);

int main(){
    double num1,num2;
    char line1[BUFF],line2[BUFF];

    cout<<"두 실수 입력 : ";
    cin>>num1>>num2;
    cout<<"큰 값 : "<<uMax(num1,num2)<<endl;

    cout<<"두 문자열 입력 : ";
    cin>>line1>>line2;
    cout<<"긴 문자열 : "<<uMax(line1,line2)<<endl;
    
    return 0;

}
double uMax(double a,double b){
    return a<b? b:a;
}
char *uMax(char *line1,char *line2){
    return strcnt(line1)<strcnt(line2) ? line2:line1;
}
int strcnt(const char*line){
    int i=0;
    while(line[i++]!='\0'||i<BUFF);
    return i;
}