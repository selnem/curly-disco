#include<iostream>
using namespace std;
int main(){
    int temp,min=101,sum=0;
    for(int i=0;i<7;i++){
        cin>>temp;
        if(temp%2){
            if(min>temp){
                min=temp;
            }
            sum+=temp;
        }
    }
    if(min==101){
        cout<<-1;
    }
    else{
        cout<<sum<<endl<<min;
    }
    return 0;
}