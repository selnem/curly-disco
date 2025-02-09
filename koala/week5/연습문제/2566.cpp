#include<iostream>
using namespace std;
int main(){
    int max_v=-1;
    int tmp;
    int max_r=0,max_c=0;
    for(int r=1;r<=9;r++){
        for(int c=1;c<=9;c++){
            cin>>tmp;
            if(tmp>max_v){
                max_v=tmp;
                max_r=r;
                max_c=c;
            }
        }
    }
    cout<<max_v<<endl;
    cout<<max_r<<' '<<max_c;
    return 0;
}