#include<iostream>
#include<string>
using namespace std;
void dis_prn(string &line1,string &line2);
int main(){
    string line1,line2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>line1>>line2;
        cout<<"Distances: ";
        dis_prn(line1,line2);
    }

    return 0;
}
void dis_prn(string &line1,string &line2){
    int temp;
    for(int i=0;i<line1.length();i++){
        temp=(26+(int)line2[i]-(int)line1[i])%26;
        cout<<temp<<' ';
    }
    cout<<endl;
}