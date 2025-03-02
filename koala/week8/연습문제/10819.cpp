#include<iostream>
using namespace std;

int arr[8]={0};
int s_arr[8]={0};
bool vis[8]={0};
int ans=0;

void recur(int n,int cnt=0);

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recur(n);
    cout<<ans;
    return 0;
}
void recur(int n,int cnt){
    if(cnt==n){
        int tmp=0;
        for(int i=0;i<n-1;i++){
            tmp+=abs(s_arr[i]-s_arr[i+1]);
        }
        ans=max(ans,tmp);
        return;
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            s_arr[cnt]=arr[i];
            vis[i]=true;
            recur(n,cnt+1);
            vis[i]=false;
        }
    }

}