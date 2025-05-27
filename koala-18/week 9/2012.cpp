#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    priority_queue<int,vector<int>,greater<int> > q;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        q.push(tmp);
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        int k=q.top();
        q.pop();
        ans+=abs(i-k);
    }
    cout<<ans;
    return 0;

}