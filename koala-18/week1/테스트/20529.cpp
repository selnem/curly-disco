#include<iostream>
#include<vector>
#include<string>
using namespace std;

int stu_dis();
int get_dis(const string &a,const string &b);
int main(){
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<stu_dis()<<'\n';
    }
    return 0;
}

int stu_dis(){
    int n,dis=1<<30;
    cin>>n;
    vector<string> students(n);
    for(int i=0;i<n;i++){
        cin>>students[i];
    }
    if(n>32){
        return 0;
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                dis=min(dis,get_dis(students[i],students[j])+get_dis(students[j],students[k])+get_dis(students[i],students[k]));
            }
        }
    }
    
    return dis;

}
int get_dis(const string &a,const string &b){
    int cnt=0;
    for(int i=0;i<4;i++){
        if(a[i]!=b[i]){
            cnt++;
        }
    }
    return cnt;
}