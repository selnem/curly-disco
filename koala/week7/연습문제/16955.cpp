#include<iostream>
#include<string>
using namespace std;
int bord[10][10]={0};


int can_win(int t);

bool m_row(int i,int j,int t);
bool m_col(int i,int j,int t);
bool m_crsR(int i,int j,int t);
bool m_crsL(int i,int j,int t);
inline bool in_range(int r,int c);

int main(){
    int mapp[150]={0};
    char temp;
    mapp['.']=0;
    mapp['X']=1;
    mapp['O']=2;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>temp;

            bord[i][j]=mapp[temp];
        }
    }
    cout<<can_win(mapp['X']);
    return 0;
}

int can_win(int t){//둘수있는 모든칸에 한 번씩 두면서 가능한지 판단 함수
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(bord[i][j]){
                continue;
            }
            if(m_row(i,j,t)||m_col(i,j,t)||m_crsR(i,j,t)||m_crsL(i,j,t)){
                return 1;
            }
        }
    }
    return 0;
}

bool m_row(int i,int j,int t){//행 음직이면서 5칸 되는지 판단
    int p=0,m=0;
    int r,c;
    r=i;
    c=j;
    while(1){
        r++;
        if(in_range(r,c)&&(bord[r][c]==t)){
            p++;
        }
        else{
            break;
        }
    }
    r=i;
    while(1){
        r--;
        if(in_range(r,c)&&bord[r][c]==t){
            m++;
        }
        else{
            break;
        }
    }

    if(p+m>=4){
        return true;
    }
    
    return false;   
}
bool m_col(int i,int j,int t){//열 음직이면서 판단
    int p=0,m=0;
    int r,c;
    r=i;
    c=j;
    while(1){
        c++;
        if(in_range(r,c)&&bord[r][c]==t){
            p++;
        }
        else{
            break;
        }
    }
    c=j;
    while(1){
        c--;
        if(in_range(r,c)&&bord[r][c]==t){
            m++;
        }
        else{
            break;
        }
    }
    if(p+m>=4){
        return true;
    }
    return false;
}
bool m_crsR(int i,int j,int t){//우측 대각선
    int p=0,m=0;
    int r,c;
    r=i;
    c=j;
    while(1){
        r++;
        c++;
        if(in_range(r,c)&&bord[r][c]==t){
            p++;
        }
        else{
            break;
        }
    }
    r=i;
    c=j;
    while(1){
        r--;
        c--;
        if(in_range(r,c)&&bord[r][c]==t){
            m++;
        }
        else{
            break;
        }
    }
    if(p+m>=4){
        return true;
    }
    return false;
}
bool m_crsL(int i,int j,int t){//좌측 대각선
    int p=0,m=0;
    int r,c;
    r=i;
    c=j;
    while(1){
        r++;
        c--;
        if(in_range(r,c)&&bord[r][c]==t){
            p++;
        }
        else{
            break;
        }
    }
    r=i;
    c=j;
    while(1){
        r--;
        c++;
        if(in_range(r,c)&&bord[r][c]==t){
            m++;
        }
        else{
            break;
        }
    }
    if(p+m>=4){
        return true;
    }
    return false;
}

inline bool in_range(int r,int c){//해당 인덱스가 체커보드 벗어나는지
    return 0<=r&&r<10&&0<=c&&c<10;
}