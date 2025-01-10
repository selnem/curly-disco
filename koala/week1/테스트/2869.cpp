#include<iostream>
using namespace std;
int main(){
    int A,B,V,day;
    cin>>A>>B>>V;
    day=(V-A)/(A-B)+1;
    if((V-A)%(A-B)){
        day++;
    }
    cout<<day;
    return 0;
}