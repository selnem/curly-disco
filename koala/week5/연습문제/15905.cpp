#include<iostream>
#include<algorithm>
using namespace std;

struct SHAKE{
    int sol_cnt,penulty;
};

bool odr_sc(SHAKE &a,SHAKE &b);
int cnt_chick(SHAKE *list,int size);

int main(){
    int n;
    cin>>n;
    SHAKE *list=new SHAKE[n];
    for(int i=0;i<n;i++){
        cin>>list[i].sol_cnt>>list[i].penulty;
    }
    cout<<cnt_chick(list,n);
    return 0;
}
bool odr_sc(SHAKE &a,SHAKE &b){
    if(a.sol_cnt==b.sol_cnt){
        return a.penulty<b.penulty;
    }
    return a.sol_cnt>b.sol_cnt;
}

int cnt_chick(SHAKE *list,int size){
    int cnt=0;
    sort(list,list+size,odr_sc);
    for(int i=5;i<size;++i){
        if(list[i].sol_cnt<list[4].sol_cnt){
            return cnt;
        }
        ++cnt;
    }
    return cnt;
}