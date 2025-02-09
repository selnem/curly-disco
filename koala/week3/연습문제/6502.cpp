#include<iostream>
using namespace std;
int main(){
    int r,w,l;
    int pizza_num=1;
    const char *prn[2]={"does not fit on the table.","fits on the table."};
    while(1){
        cin>>r;
        if(!r){
            break;
        }
        cin>>w>>l;
        r*=2;
        cout<<"Pizza "<<pizza_num++<<' '<<prn[r*r>=w*w+l*l]<<'\n';
    }
    return 0;
}