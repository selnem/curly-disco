#include<iostream>
#include<algorithm>
using namespace std;

struct APC{
    int p_num;
    int score;
    int submit;
    int upload;
};
bool odr(APC &a,APC &b);
int main(){
    int n;
    cin>>n;
    APC *arr=new APC[n];
    for(int i=0;i<n;i++){
        arr[i].p_num=i+1;
        cin>>arr[i].score>>arr[i].submit>>arr[i].upload;
    }
    sort(arr,arr+n,odr);
    cout<<arr[0].p_num;
    delete[] arr;
    return 0;

}
bool odr(APC &a,APC &b){
    if(a.score==b.score){
        if(a.submit==b.submit){
            return a.upload<b.upload;
        }
        return a.submit<b.submit;
    }
    return a.score>b.score;
}