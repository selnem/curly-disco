#include<iostream>
#include<string>
using namespace std;
int mapping[150]={0};
void read_byte();
int main(){
    int n;
    cin>>n;
    mapping['I']=1;
    mapping['O']=0;
    const char *case_prn="Case #";
    for(int i=1;i<=n;i++){
        cout<<case_prn<<i<<": ";
        read_byte();
    }
}
void read_byte(){
    int B;
    cin>>B;
    string line;
    cin>>line;
    int sq;
    char temp;
    for(int i=1;i<=B;i++){
        sq=1;
        temp=0;
        for(int j=8*i-1;j>=8*(i-1);j--){
            temp+=sq*mapping[line[j]];
            sq*=2;
        }
        cout<<temp;
    }
    cout<<'\n';

}

