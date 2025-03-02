#include<iostream>
#include<string>
using namespace std;
int is_Eyfa(string *o,string*l,int n,int m);
int main(){
    int n,m;
    cin>>n>>m;
    const char*prn[2]={"Not Eyfa","Eyfa"};
    string*o_img=new string[n];
    string*l_img=new string[n];
    for(int i=0;i<n;i++){
        cin>>o_img[i];
    }
    for(int i=0;i<n;i++){
        cin>>l_img[i];
    }
    cout<<prn[is_Eyfa(o_img,l_img,n,m)];
    delete[]o_img;
    delete[]l_img;
    return 0;
}
int is_Eyfa(string *o,string*l,int n,int m){
    int eyfa=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*m;j++){
            if(o[i][j/2]!=l[i][j]){
                eyfa=0;
                break;
            }
        }
    }
    return eyfa;
}