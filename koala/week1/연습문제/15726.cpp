#include<iostream>
using namespace std;
int main(){
    double A,B,C;
    double ans1,ans2;
    cin>>A>>B>>C;
    ans1=A*B/C;
    ans2=A/B*C;
    cout<<(int)(ans1>ans2 ? ans1:ans2);
    return 0;
}