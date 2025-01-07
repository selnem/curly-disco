#include<iostream>
using namespace std;
int main(){
    int ang_1,ang_2,ang_3;
    cin>>ang_1>>ang_2>>ang_3;
    if(180!=ang_1+ang_2+ang_3){
        cout<<"Error";
    }
    else{
        if(ang_1==60&&ang_1==ang_2){
            cout<<"Equilateral";
        }
        else if(ang_1==ang_2||ang_2==ang_3||ang_1==ang_3){
            cout<<"Isosceles";
        }
        else{
            cout<<"Scalene";
        }
    }
    return 0;
}