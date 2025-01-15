#include<iostream>
using namespace std;
int main(){
    int index;
    int max=-1,temp;
    for(int i=1;i<=9;i++){
        cin>>temp;
        if(max<temp){
            max=temp;
            index=i;
        }
    }
    cout<<max<<endl<<index;
    return 0;
}