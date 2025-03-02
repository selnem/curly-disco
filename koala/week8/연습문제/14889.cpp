#include<iostream>
using namespace std;
int arr[20][20]={0};
bool pic[20]={0};
int ans=1<<30;

void recur(int n,int start=0,int cnt=0);
int stats(int n);

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    recur(n);
    cout<<ans;
    return 0;

}
int stats(int n){
    int score[2]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(pic[i]&&pic[j]){
                score[0]+=arr[i][j];
            }
            else if(!pic[i]&&!pic[j]){
                score[1]+=arr[i][j];
            }
        }
    }
    return abs(score[0]-score[1]);
}



void recur(int n,int start,int cnt){
    if(cnt==n/2){
        ans=min(ans,stats(n));
        return;
    }
    for(int i=start;i<n-1;i++){
        pic[i]=true;
        recur(n,i+1,cnt+1);
        pic[i]=false;
    }

}