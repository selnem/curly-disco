#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct SITE{   
    string adr;
    string pw;
}SITE;

bool compare(const SITE &p1,const SITE &p2);

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N,M;
    cin>>N>>M;
    SITE *DB=new SITE[N];
    for(int i=0;i<N;i++){
        cin>>DB[i].adr>>DB[i].pw;
    }
    sort(DB,DB+N,compare);


}

bool compare(const SITE &p1,const SITE &p2){
    return p1.adr>p2.adr;
}

