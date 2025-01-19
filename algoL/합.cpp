#include<iostream>
using namespace std;
//n,m a+b+c=n 1<=a,b,c<=m 
/*
10,4
2+4+4
3+3+4
3+4+3
4+2+4
4+3+3
4+2+4

111
112
113
...\
에서 걸러내는 코드

이경우가 정답이 되는가? 된다면 최소 갱신같은 문제

*/

int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int a=1;a<=m;a++){
        for(int b=1;b<=m;b++){
            for(int c=1;c<=m;c++){
                if(a+b+c!=n){
                    continue;
                }
                cout<<a<<' '<<b<<' '<<c<<' '<<endl;
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<-1;
    }
    else{
        cout<<cnt;
    }
    return 0;
}