#include<iostream>
#include<set>
#include<string>
using namespace std;
struct odr{
    bool operator() (const string &a,const string &b)const{
        if(a.length()<b.length()){
            return true;
        }
        else if(a.length()==b.length()){
            return a<b;
        }
        else{
            return false;
        }
    }
};
    
int main(){
    int N;
    string temp;
    cin>>N;
    set<string,odr> st;
    for(int i=0;i<N;++i){
        cin>>temp;
        st.insert(temp);
    }
    for(auto &line : st){
        cout<<line<<'\n';
    }

    return 0;
}

