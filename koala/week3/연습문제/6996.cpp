#include<iostream>
#include<string>
using namespace std;

bool anagrams(const string &line1,const string &line2);
int main(){
    int n;
    string line1,line2;
    cin>>n;
    const char *ans_prn[2]={"are NOT anagrams.","are anagrams."};
    for(int i=0;i<n;i++){
        cin>>line1>>line2;
        cout<<line1<<" & "<<line2<<" "<<ans_prn[anagrams(line1,line2)]<<'\n';
    }

    return 0;
}

bool anagrams(const string &line1,const string &line2){
    if(line1.length()!=line2.length()){
        return false;
    }
    int cnt1[150]={0};
    int cnt2[150]={0};
    for(int i=0;i<line1.length();i++){
        cnt1[line1[i]]++;
        cnt2[line2[i]]++;
    }
    for(int i=0;i<150;i++){
        if(cnt1[i]!=cnt2[i]){
            return false;
        }
    }

    return true;

}