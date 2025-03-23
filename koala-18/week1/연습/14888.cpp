#include<iostream>
#include<vector>
using namespace std;

int maxx=-(1<<30);
int minn=1<<30;
int n;
int oper_arr[4];//연산자 갯수 배열
void recur(vector<int>&arr,int ans,int d=1);
int main(){
    int tmp;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    for(int i=0;i<4;i++){
        cin>>oper_arr[i];
    }
    recur(arr,arr[0]);
    cout<<maxx<<endl<<minn;

    
}

void recur(vector<int>&arr,int ans,int d){
    if(d==n){
        maxx=max(maxx,ans);
        minn=min(minn,ans);
        return;
    }
    if(oper_arr[0]>0){
        oper_arr[0]--;
        recur(arr,ans+arr[d],d+1);
        oper_arr[0]++;
    }
    if(oper_arr[1]>0){
        oper_arr[1]--;
        recur(arr,ans-arr[d],d+1);
        oper_arr[1]++;
    }
    if(oper_arr[2]>0){
        oper_arr[2]--;
        recur(arr,ans*arr[d],d+1);
        oper_arr[2]++;
    }
    if(oper_arr[3]>0){
        oper_arr[3]--;
        recur(arr,ans/arr[d],d+1);
        oper_arr[3]++;
    }

}