#include<iostream>
#include<vector>
using namespace std;
int s_len(vector<int>&arr,int c,int M);
int main(){
    int N,M,L,c_cnt;
    int tmp;
    vector<int> cut_l;
    cin>>N>>M>>L;
    for(int i=0;i<M;i++){
        cin>>tmp;
        cut_l.push_back(tmp);
    }
    cut_l.push_back(L);
    int t_cnt;
    for(int i=0;i<N;i++){
        cin>>t_cnt;
        cout<<s_len(cut_l,t_cnt,M)<<endl;
    }
    
    return 0;
}
int s_len(vector<int>&arr,int c,int M){
    int ans=0;
    int l=1;
    int r=arr[M];
    while(l<=r){
        int cnt=0;
        int bfor=0;
        int m=(l+r)/2;
        for(auto & it:arr){
            if(it-bfor>=m){
                ++cnt;
                bfor=it;
            }
        }
        if(cnt>c){
            l=m+1;
            ans=max(ans,m);
        }
        else{
            r=m-1;
        }
    }
    return ans;
}