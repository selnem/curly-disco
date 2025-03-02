#include<iostream>
#include<deque>
#include<queue>
using namespace std;


int price[100];
int weight[2001]={0};
int cars[2001]={0};
int main(){
    int sum=0;
    priority_queue<int,vector<int>,greater<int> >space;
    queue<int>left;
    int n,m;
    cin>>n>>m;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>price[i];
        space.push(i);
    }
    for(int i=1;i<=m;i++){
        cin>>weight[i];
    }
    
    for(int i=0;i<2*m;i++){
        cin>>tmp;
        if(tmp>0){
            if(!space.empty()){
                cars[tmp]=space.top();
                sum+=price[cars[tmp]]*weight[tmp];
                space.pop();
            }
            else{
                left.push(tmp);
            }
        }
        else{
            space.push(cars[-tmp]);
            if(!left.empty()){
                cars[left.front()]=space.top();
                sum+=price[space.top()]*weight[left.front()];
                left.pop();
                space.pop();
            }
        }
    }
    cout<<sum;
    
    return 0;
}