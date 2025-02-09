#include<iostream>
using namespace std;
int main(){
    const char *ans_prn[3]={"Wrong Answer","Why Wrong!!!","Accepted"};
    int tst_case=1;
    int cmp_case=1;
    int T_1,T_2;
    cin>>T_1>>T_2;
    
    int a,b;
    for(int i=0;i<T_1;i++){
        cin>>a>>b;
        if(a!=b){
            tst_case=0;
        }
    }
    for(int i=0;i<T_2;i++){
        cin>>a>>b;
        if(a!=b){
            cmp_case=0;
        }
    }
    if((tst_case&&cmp_case)||(tst_case&&T_2==0)){
        cout<<ans_prn[2];
    }
    else if(tst_case&&(!cmp_case)){
        cout<<ans_prn[1];
    }
    else{
        cout<<ans_prn[0];
    }
    return 0;
}