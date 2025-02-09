#include<iostream>
#include<string>
using namespace std;
void prn_var(char *db,bool *idx,int size);
int typ_in(int l_typ,string &line,char *db,bool *idx);
int main(){
    string line;
    int l_typ;
    int size;
    char l_db[100];
    bool start_index[100]={0};
    cin>>l_typ;
    cin>>line;
    size=typ_in(l_typ,line,l_db,start_index);
    prn_var(l_db,start_index,size);
    return 0;
}
int typ_in(int l_typ,string &line,char *db,bool *idx){
    int temp=0;
    switch(l_typ){
        case 1:
            for(int i=0;i<line.length();i++){
                if('A'<=line[i]&&line[i]<='Z'){
                    db[i]=line[i]+32;
                    idx[i]=true;
                }
                else{
                    db[i]=line[i];
                }
            }
            return line.length();
            break;
        case 2:
            for(int i=0;i<line.length();i++){
                if(line[i]=='_'){
                    idx[temp]=true;
                    continue;
                }
                db[temp++]=line[i];
            }
            return temp;
            break;
        case 3:
            for(int i=0;i<line.length();i++){
                if('A'<=line[i]&&line[i]<='Z'){
                    db[i]=line[i]+32;
                    idx[i]=true;
                }
                else{
                    db[i]=line[i];
                }
            }
            idx[0]=false;
            return line.length();
            break;
    }
    return 0;
}
void prn_var(char *db,bool *idx,int size){
    char temp;
    for(int i=0;i<size;i++){
        if(idx[i]){
            temp=db[i]-32;
        }
        else{
            temp=db[i];
        }
        cout<<temp;
    }
    cout<<'\n';
    for(int i=0;i<size;i++){
        if(idx[i]){
            cout<<'_';
        }
        temp=db[i];
        cout<<temp;
    }
    cout<<'\n';
    for(int i=0;i<size;i++){
        if(idx[i]||i==0){
            temp=db[i]-32;
        }
        else{
            temp=db[i];
        }
        cout<<temp;
    }
}