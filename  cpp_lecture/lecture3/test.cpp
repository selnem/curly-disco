#include<iostream>
using namespace std;
#define SQ(x) (x)*(x)
inline int sq(int x){
    return x*x;
}
int main(){
    int x=5;
    int n=SQ(++x);
    cout<<n<<endl;
    int y=5;
    int k=sq(++y);
    cout<<k;
    return 0;
}