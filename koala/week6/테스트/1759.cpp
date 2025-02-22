#include<iostream>
#include<algorithm>
using namespace std;

char ans[15];

void recur(int n,int c,int start,char *arr,int cnt,int v_cnt,int c_cnt);
bool is_vowel(char c);

int main(){
    int l,c;
    cin>>l>>c;
    char * arr=new char[c];
    for(int i=0;i<c;i++){
        cin>>arr[i];
    }
    sort(arr,arr+c);
    recur(l,c,0,arr,0,0,0);
    delete[] arr;
    return 0;
}

void recur(int n,int c,int start,char *arr,int cnt,int v_cnt,int c_cnt){
    if(cnt==n){
        if(v_cnt>0&&c_cnt>=2){
            for(int i=0;i<n;i++){
                cout<<ans[i];
            }
            cout<<'\n';
        }
        return;
    }
    for(int i=start;i<c-n+cnt+1;i++){
        if(is_vowel(arr[i])){
            ans[cnt]=arr[i];
            recur(n,c,i+1,arr,cnt+1,v_cnt+1,c_cnt);
        }
        else{
            ans[cnt]=arr[i];
            recur(n,c,i+1,arr,cnt+1,v_cnt,c_cnt+1);
        }
    }
}
bool is_vowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}