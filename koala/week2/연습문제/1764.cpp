#include<iostream>
#include<string>
using namespace std;

void DB_finder(string *arr1,string *arr2,int n);

int main(){
    int N,M;
    cin>>N>>M;
    string *D_arr=new string[N];
    string *B_arr=new string[M];
    
    for(int i=0;i<N;i++){
        cin>>D_arr[i];
    }

    for(int i=0;i<M;i++){
        cin>>B_arr[i];
    }




    delete[] D_arr;
    delete[] B_arr;
    return 0;
}