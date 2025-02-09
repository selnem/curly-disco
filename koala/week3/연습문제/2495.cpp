#include<iostream>
#include<string>
#define N 8
using namespace std;
int m_len(int *arr);
void sToint(string&line,int *arr);
int main(){
    int arr[N];
    string line;
    for(int k=0;k<3;k++){
        cin>>line;
        sToint(line,arr);
        cout<<m_len(arr)<<endl;
    }
    
    return 0;
}
int m_len(int *arr){
    int s=0,e=0,m_len=1;
    while(e<N){
        if(arr[s]==arr[e]){
            m_len=max(m_len,e-s+1);
            e++;
        }
        else{
            s=e;
        }
    }
    return m_len;
}
void sToint(string&line,int *arr){
    for(int i=0;i<N;i++){
        arr[i]=line[i]-'0';
    }
}