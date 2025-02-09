#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int idx=0;
    set <string> B_set;
    string ban[10]={"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
    string temp;
    for(int i=0;i<10;i++){
        B_set.insert(ban[i]);
    }
    cin>>temp;
    cout<<(char)(temp[0]-32);
    while(1){
        cin>>temp;
        if(cin.eof()){
            break;
        }
        if(B_set.find(temp)==B_set.end()){
            cout<<(char)(temp[0]-32);
        }

    }
    return 0;
}