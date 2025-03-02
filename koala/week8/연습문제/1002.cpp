#include<iostream>
using namespace std;

int sqar(int n);
int rwu_cnt();

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<rwu_cnt()<<endl;
    }
    return 0;
}
int sqar(int n){
    return n*n;
}
int rwu_cnt(){

    int x1,y1,x2,y2,r1,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    if(x1==x2&&y1==y2&&r1==r2){
        return -1;
    }
    
    int p_dis=sqar(x1-x2)+sqar(y1-y2);
    int d1_dis=sqar(r1+r2);
    int d2_dis=sqar(abs(r1-r2));

    
    if(p_dis<d1_dis&&p_dis>d2_dis){
        return 2;
    }
    if(p_dis==d1_dis||p_dis==d2_dis){
        return 1;
    }
    return 0;
}