#include<iostream>
using namespace std;
int main(){
    int mapp[150]={0};
    mapp['F']=1;
    int ans=0;
    char temp;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>temp;
            if((i+j)%2==0&&mapp[temp]){
                ans++;
            }
        }
    }

    cout<<ans;
    return 0;

}