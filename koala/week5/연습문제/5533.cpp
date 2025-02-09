#include<iostream>
using namespace std;
int main(){
    int n;
    int sc_arr[200][3]={0};
    int cnt_arr[3][101]={0};
    int ans_arr[200]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sc_arr[i][0]>>sc_arr[i][1]>>sc_arr[i][2];
    }
    for(int g=0;g<3;g++){
        for(int p=0;p<n;p++){
            cnt_arr[g][sc_arr[p][g]]++;
        }
    }
    for(int g=0;g<3;g++){
        for(int p=0;p<n;p++){
            if(cnt_arr[g][sc_arr[p][g]]!=1){
                continue;
            }
            ans_arr[p]+=sc_arr[p][g];
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans_arr[i]<<'\n';
    }
    return 0;
}