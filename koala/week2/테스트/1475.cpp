#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    int mapper[150]={0};
    string Dic="012345678";
    for(int i=0;i<Dic.length();i++){
        mapper[Dic[i]]=i;
    }
    mapper['9']=6;
    int cnt_arr[9]={0};
    cin>>line;
    for(int i=0;i<line.length();i++){
        cnt_arr[mapper[line[i]]]++;
    }
    cnt_arr[6]=cnt_arr[6]/2+cnt_arr[6]%2;
    int max=0;
    for(int i=0;i<9;i++){
        if(max<cnt_arr[i]){
            max=cnt_arr[i];
        }
    }
    cout<<max;
    return 0;
}