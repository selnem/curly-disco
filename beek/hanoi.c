#include<stdio.h>
typedef struct hanoi{
    int x,y;
}Hnoi;

int hanoi_cnt(int N);
void hanoi_print(Hnoi* arr,int N);

int main(){
    int n,cnt;
    scanf("%d",&n);
    cnt=hanoi_cnt(n);
    printf("%d\n",cnt);
    Hnoi *arr=(Hnoi*)malloc(sizeof(Hnoi)*cnt);
    arr[0].x=1;
    arr[0].y=3;

    free(arr);
    
}
int hanoi_cnt(int N){
    if(N==1){
        return 1;
    }
    else{
        return hanoi_cnt(N-1)*2+1;
    }
}
void hanoi_print(Hnoi* arr,int N){
    
}