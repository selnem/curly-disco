#include<iostream>
#include<string>
using namespace std;
string line;
char arr[500000];

void recur(int start,int cnt,int idx);
int main(){
    int n,m;
    cin>>n>>m;
    cin>>line;
    recur(0,n-m,0);
    for(int i=0;i<n-m;i++){
        cout<<arr[i];
    }
    return 0;

}

void recur(int start,int cnt,int idx){
    if(cnt==0){
        return;
    }
    int max_idx=0;
    char max_vel=0;
    for(int i=start;i<line.length()-cnt+1;i++){
        if(max_vel<line[i]){
            max_vel=line[i];
            max_idx=i;
        }
    }
    arr[idx]=max_vel;
    recur(max_idx+1,cnt-1,idx+1);
}
