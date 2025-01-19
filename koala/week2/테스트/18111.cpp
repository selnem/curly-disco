#include<iostream>
using namespace std;

int time(int dig,int stack){
    return 2*dig+stack;
}

int main(){
    int N,M,B;
    cin>>N>>M>>B;
    int size=N*M;
    int max_h=-1,min_h=1<<30;
    int *plain = new int [size];
    for(int i=0;i<size;i++){
        cin>>plain[i];
        if(plain[i]<min_h){
            min_h=plain[i];
        }
        if(plain[i]>max_h){
            max_h=plain[i];
        }
    }

    if(min_h==max_h){
        cout<<0<<' '<<max_h;
        return 0;
    }

    int t=1<<30;
    int dig,stack,height;

    
    for(int h=max_h;h>=min_h;h--){
        dig=0;
        stack=0;
        for(int i=0;i<size;i++){
            if(plain[i]>h){
                dig+=plain[i]-h;
            }
            else if(plain[i]<h){
                stack+=h-plain[i];
            }
        }
        if(stack<=dig+B){
            if(time(dig,stack)<t){
                height=h;
                t=time(dig,stack);    
            }
        }
    }
    cout<<t<<' '<<height;
    delete[] plain;
    return 0;
}