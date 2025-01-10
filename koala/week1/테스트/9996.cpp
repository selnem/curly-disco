#include<iostream>
#include<string>
using namespace std;
int find(const string &pt);

int main(){
    int N;
    const char *f[2]={"NE","DA"};
    string pattern;
    cin>>N;
    cin>>pattern;
    for(int i=0;i<N;i++){
        cout<<f[find(pattern)]<<endl;
    }
    return 0;
    
}

int find(const string &pt){
    string line;
    cin>>line;
    int P_bool=1;
    int P_start=0,L_start=0,P_end=pt.length()-1,L_end=line.length()-1;
    if(P_end>L_end+1){
        return 0;
    }
    while(1){
        if(pt[P_start]!='*'){
            if(pt[P_start++]!=line[L_start++]){
                P_bool=0;
                break;
            }
        }
        else{
            break;
        }
    }
    while(P_bool){
        if(pt[P_end]!='*'){
            if(pt[P_end--]!=line[L_end--]){
                P_bool=0;
                break;
            }
        }
        else{
            break;
        }
        
    }
    return P_bool;
}