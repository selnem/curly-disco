#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int point[2][100000];
    int nums[200000]={0};
    int index=0;
    int cnt_arr[100002]={0};
    long long cnt=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>point[0][i]>>point[1][i];
        nums[index++]=point[0][i];
        nums[index++]=point[1][i];
    }
    sort(nums,nums+index,less<int>());
    for(int i=0;i<index;i++){
        mp.insert(pair<int,int>(nums[i],i+1));
        cout<<nums[i]<<' '<<i+1;
    }
    for(int i=0;i<n;i++){
        cnt_arr[mp[point[0][i]]]+=1;
        cnt_arr[mp[point[1][i]]]-=1;
    }
    for(int i=1;i<=mp[nums[index-1]];i++){
        cnt_arr[i]=cnt_arr[i-1]+cnt_arr[i];
    }
    for(int i=0;i<=mp[nums[index-1]];i++){
        if(cnt_arr[i]==0&&cnt_arr[i+1]>0){
            cnt++;
        }
    }
    cout<<cnt;


    
    return 0;
}