#include<iostream>
using namespace std;

bool pel(int n,int b);
int is_hnum(int n);

int main(){
    int n,temp;
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>temp;
        cout<<is_hnum(temp)<<endl;
    }

    return 0;
}

int is_hnum(int n){
    int is_h=0;

    for(int i=2;i<=64;i++){
        if(pel(n,i)){
            return 1;
        }
    }

    return 0;
}
bool pel(int n,int b){
    int arr[32]={0};
    int size=0;

    while(n>0){
        arr[size++]=n%b;
        n/=b;
    }

    int s=0,e=size-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        ++s;
        --e;
    }

    return true;
}