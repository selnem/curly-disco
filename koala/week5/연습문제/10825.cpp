#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct STU{
    string name;
    int kor;
    int eng;
    int mat;
};
bool odr(STU &a,STU &b);
int main(){
    int n;
    cin>>n;
    STU *stList=new STU[n];
    for(int i=0;i<n;i++){
        cin>>stList[i].name>>stList[i].kor>>stList[i].eng>>stList[i].mat;
    }
    sort(stList,stList+n,odr);
    for(int i=0;i<n;i++){
        cout<<stList[i].name<<'\n';
    }
    delete[] stList;
    return 0;
}

bool odr(STU &a,STU &b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            if(a.mat==b.mat){
                return a.name<b.name;
            }
            return a.mat>b.mat;
        }
        return a.eng<b.eng;
    }
    return a.kor>b.kor;
}