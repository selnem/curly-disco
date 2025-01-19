#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct SITE{   
    string adr;
    string pw;
}SITE;

bool compare(const SITE &p1,const SITE &p2);
string pw_finder(SITE*DB,const string &site,int db_size);

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N,M;
    cin>>N>>M;
    SITE *DB=new SITE[N];
    string *find=new string[M];
    for(int i=0;i<N;i++){
        cin>>DB[i].adr>>DB[i].pw;
    }
    for(int i=0;i<M;i++){
        cin>>find[i];
    }

    sort(DB,DB+N,compare);
    for(int i=0;i<M;i++){
        cout<<pw_finder(DB,find[i],N)<<'\n';
    }
    delete[] DB;
    delete[]find;
    return 0;

}

bool compare(const SITE &p1,const SITE &p2){
    return p1.adr<p2.adr;
}

string pw_finder(SITE*DB,const string &site,int db_size){
    int left=0,right=db_size-1,mid;
    string err="can't find";
    while(1){
        mid=(left+right)/2;
        if(DB[mid].adr==site){
            return DB[mid].pw;
        }
        else if(DB[mid].adr>site){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
}