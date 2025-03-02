#include<iostream>
using namespace std;

int minn=1<<30;
int maxx=-(1<<30);
int arr[11];
int cnt_arr[4];
int cal_arr[10];

void cal_fuc(int idx,int &num);
void recur(int n,int cnt=0);

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        cin>>cnt_arr[i];
    }
    recur(n);
    cout<<maxx<<'\n'<<minn;
    return 0;

}
void recur(int n,int cnt){
    if(cnt==n-1){
        int tmp=arr[0];
        for(int i=0;i<n-1;i++){
            cal_fuc(i,tmp);
        }
        maxx=max(maxx,tmp);
        minn=min(minn,tmp);
        return;
    }
    for(int i=0;i<4;i++){
        if(cnt_arr[i]<=0){
            continue;
        }
        cnt_arr[i]--;
        cal_arr[cnt]=i;
        recur(n,cnt+1);
        cnt_arr[i]++;
    }
}
void cal_fuc(int idx,int &num){
    switch(cal_arr[idx]){
        case 0:
            num+=arr[idx+1];
            break;
        case 1:
            num-=arr[idx+1];
            break;
        case 2:
            num*=arr[idx+1];
            break;
        case 3:
            num/=arr[idx+1];
            break;
    }
}