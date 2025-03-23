#include<iostream>
#include<vector>
using namespace std;
int chick_d=1<<30;

vector< pair<int,int> >chick;
vector< pair<int,int> > house;
pair<int,int> *survived;

void recur( int m,int cnt=0,int s=0);
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    survived = new pair<int,int>[m];
   
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            if(tmp==1){
                house.push_back(make_pair(i,j));
            }
            if(tmp==2){
                chick.push_back(make_pair(i,j));
            }
        }
    }
    recur(m);
    cout<<chick_d;
    delete[]survived;
    return 0;
    
}

void recur(int m,int cnt,int s){
    if(cnt==m){
        int dist=0;
        for(int i=0;i<house.size();i++){
            int minn=1<<30;
            for(int j=0;j<m;j++){
                minn=min(minn,abs(house[i].first-survived[j].first)+abs(house[i].second-survived[j].second));
            }
            dist+=minn;
        }
        chick_d=min(chick_d,dist);
        return;
    }
    for(int i=s;i<chick.size()-m+cnt+1;i++){
        survived[cnt]=chick[i];
        recur(m,cnt+1,i+1);
    }
}
