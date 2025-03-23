#include<iostream>
#include<algorithm>
using namespace std;
int R,C;
int middle_vel(int**arr,int r,int c);
int main(){
    int T,cnt=0;
    cin>>R>>C;
    int **arr=new int* [R];
    for(int i=0;i<R;i++){
        arr[i]=new int [C];
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }
    cin>>T;
    for(int i=0;i<R-2;i++){
        for(int j=0;j<C-2;j++){
            if(T<=middle_vel(arr,i,j)){
                cnt++;
            }
        }
    }
    cout<<cnt;


    for(int i=0;i<R;i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
int middle_vel(int**arr,int r,int c){
    int nums[9];
    int idx=0;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            nums[idx++]=arr[i][j];
        }
    }
    sort(nums,nums+9);
    return nums[4];
}