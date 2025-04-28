#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool b_serch(string *s,string &d,int s_size);
int comp_s(const string &s,const string &d);
int main(){
    int N,M;
    cin>>N>>M;
    string *S=new string[N];
    string *D=new string[M];
    
    for(int i=0;i<N;i++){
        cin>>S[i];
    }
    for(int i=0;i<M;i++){
        cin>>D[i];
    }
    sort(S,S+N);
    int ans=0;
    for(int i=0;i<M;i++){
        if(b_serch(S,D[i],N)){
            ans++;
        }
    }
    cout<<ans;

    delete[] S;
    delete[] D;
    return 0;
}
int comp_s(const string &s,const string &d){
    int S_len=min(s.size(),d.size());
    for(int i=0;i<S_len;i++){
        if(s[i]<d[i]){
            return -1;
        }
        else if(s[i]>d[i]){
            return 1;
        }
    }
    return 0;
}
bool b_serch(string *s,string &d,int s_size){
    int l=0;
    int r=s_size-1;
    while(l<=r){
        int m=(l+r)/2;
        int is_cor=comp_s(s[m],d);
        if(is_cor==0){
            return true;
        }
        else if(is_cor==-1){
            l=m+1;
        }
        else if(is_cor==1){
            r=m-1;
        }
    }
    return false;
}
