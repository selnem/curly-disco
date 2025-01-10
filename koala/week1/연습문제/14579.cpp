#include<iostream>
using namespace std;
int main(){
    int a,b,ans=1;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        ans*=(i*(i+1)/2);
        ans%=14579;
    }
    cout<<ans<<endl;
    return 0;
}