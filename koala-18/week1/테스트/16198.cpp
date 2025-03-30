#include<iostream>
#include<vector>
using namespace std;
int emax=0;

void recur(vector<int> &arr,int e=0);
int main(){
    int n,tmp;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recur(arr);
    cout<<emax;
    return 0;
}
void recur(vector<int> &arr,int e){
    if(arr.size()==2){
        emax=max(emax,e);
        return;
    }
    int vtmp,etmp;
    for(int i=1;i<arr.size()-1;i++){
        vtmp=arr[i];
        etmp=arr[i-1]*arr[i+1];
        arr.erase(arr.begin()+i);
        recur(arr,e+etmp);
        arr.insert(arr.begin()+i,vtmp);
    }
}