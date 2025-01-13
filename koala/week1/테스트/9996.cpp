#include<iostream>
#include<string>
using namespace std;
int find(const string &pt);//반환값 0 불일치, 1 일치

int main(){
    int N;
    const char *f[2]={"NE","DA"};//f[0] 불일치 ,f[1] 일치
     string pattern;
    cin>>N;
    cin>>pattern;
    for(int i=0;i<N;i++){
        cout<<f[find(pattern)]<<endl;
    }
    return 0;
    
}

int find(const string &pt){
    string line;
    cin>>line;
    int P_bool=1; //일치함을 가정
    int P_start=0,L_start=0,P_end=pt.length()-1,L_end=line.length()-1;//패턴과 문자열의 시작과 끝인덱스
    if(P_end>L_end+1){//만약 패턴의 *제외한 문자열 길이가 입력받은 문자열 보다 길다면 불일치
        return 0;
    }

    while(1){//처음부터 하나씩 별표 만나기전까지 비교
        if(pt[P_start]!='*'){
            if(pt[P_start++]!=line[L_start++]){
                P_bool=0;
                break;
            }
        }
        else{
            break;
        }
    }
    while(P_bool){//만약 앞쪽이 전부 일치하다면 뒤쪽도 하나씩 별표 만나기 전까지 비교
        if(pt[P_end]!='*'){
            if(pt[P_end--]!=line[L_end--]){
                P_bool=0;
                break;
            }
        }
        else{
            break;
        }
        
    }
    return P_bool;//일치 불일치 여부를 정수형으로 반환
}