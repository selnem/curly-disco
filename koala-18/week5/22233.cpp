#include<iostream>
#include<unordered_set>
#include<string>
#include<sstream>
using namespace std;

int useKeyWord(unordered_set<string>&k);
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int N,M;
    unordered_set<string>keyWord;
    cin>>N>>M;
    string tmp;
    for(int i=0;i<N;i++){
        cin>>tmp;
        keyWord.insert(tmp);
    }
    for(int i=0;i<M;i++){
        cout<<useKeyWord(keyWord)<<'\n';
    }
    return 0;
}
int useKeyWord(unordered_set<string>&k){
    string tmp;
    cin>>tmp;
    stringstream ss(tmp);
    
    while(getline(ss,tmp,',')){
        k.erase(tmp);
    }
   
    return k.size();
}