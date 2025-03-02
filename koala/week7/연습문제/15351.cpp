#include<iostream>
#include<string>
using namespace std;
int lifeScore(string &line);
int main(){
    int n;
    string line;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,line);
        if(lifeScore(line)==100){
            cout<<"PERFECT LIFE\n";
        }
        else{
            cout<<lifeScore(line)<<'\n';
        }
    }
    return 0;
    
}
int lifeScore(string &line){
    int sum=0;
    for(int i=0;i<line.length();i++){
        if(line[i]==' '){
            continue;
        }
        sum+=line[i]-'A'+1;
    }
    return sum;
}