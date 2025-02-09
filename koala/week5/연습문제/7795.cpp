#include<iostream>
#include<algorithm>
using namespace std;
int e_cnt();
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<e_cnt()<<'\n';
    }
    return 0;
}

int e_cnt(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    int *A=new int[n];
    int *B=new int [m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    sort(A,A+n,greater<int>());
    sort(B,B+m,greater<int>());
    int A_idx=0,B_idx=0;
    int b_cnt=m;
    while(A_idx<n&&B_idx<m){
        if(A[A_idx]>B[B_idx]){
            cnt+=b_cnt;
            A_idx++;
        }
        else{
            b_cnt--;
            B_idx++;
        }
    }
    delete[]A;
    delete[]B;
    return cnt;
}