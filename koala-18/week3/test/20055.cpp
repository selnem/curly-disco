#include<iostream>
#include<queue>
using namespace std;
struct INOUT{
    int in_R,out_R;
};
int cnt=0;
int robot_cnt=0;
bool move_=true;
int N,K;
void rotate_belt(INOUT &p,bool *R);
void robot_move(int *belt,bool *robot,INOUT &p);
void robot_put(int *belt,bool *robot,INOUT &p);
int main(){
    cin>>N>>K;
    int *belt=new int[2*N];
    bool* Robot=new bool[2*N];
    
    for(int i=0;i<2*N;i++){
        cin>>belt[i];
        Robot[i]=false;
    }
    INOUT pos;
    pos.in_R=0;
    pos.out_R=N-1;
    int ans=0;
    while(move_){
        rotate_belt(pos,Robot);
        robot_move(belt,Robot,pos);
        robot_put(belt,Robot,pos);
        ans++;
    }
    cout<<ans;
   
    delete[]belt;
    return 0;
}
void rotate_belt(INOUT &p,bool *R){
    p.in_R=(p.in_R+(2*N)-1)%(2*N);
    p.out_R=(p.out_R+(2*N)-1)%(2*N);
    if(R[p.out_R]){
        R[p.out_R]=false;
        robot_cnt--;
    }
}
void robot_move(int *belt,bool *robot,INOUT &p){
    if(robot_cnt){
        return;
    }
    int end=p.out_R;
    for(int i=1;i<N;i++){
        int now=(end-i+2*N)%(2*N);
        int next=(end-i+1+2*N)%(2*N);
        if(belt[next]&& !robot[next] && robot[now]){
            belt[next]--;
            if(belt[next]==0){
                cnt++;
                if(cnt>=K){
                    move_=false;
                }
            }
            robot[next]=true;
            robot[now]=false;
            if(next==end){
                robot[next]=false;
                robot_cnt--;
            }
        }
    }
}
void robot_put(int *belt,bool *robot,INOUT &p){
    if(belt[p.in_R]&&!robot[p.in_R]){
        belt[p.in_R]--;
        if(belt[p.in_R]==0){
            cnt++;
            if(cnt>=K){
                move_=false;
            }
            robot_cnt++;
        }
        robot[p.in_R]=true;
    }
}