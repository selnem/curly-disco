#include<stdio.h>
#include<stdlib.h>

unsigned int Maxdelta(MEET* sheet,int N);
int compare(const void *a,const void *b);

typedef struct meet{
    unsigned int start,end;
}MEET;

int main(){
    int N;
    MEET* time_sheet=(MEET*)malloc(sizeof(MEET)*N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&time_sheet[i].start,&time_sheet[i].end);
    }
    qsort(time_sheet,N,sizeof(MEET),compare);

    free(time_sheet);
    return 0;
}

unsigned int Maxdelta(MEET* sheet,int N){
    unsigned int maxdelta=sheet[0].end-sheet[0].start;
    for(int i=1;i<N;i++){
        maxdelta=maxdelta<(sheet[i].end-sheet[i].start)?(sheet[i].end-sheet[i].start):maxdelta;
    }
    return maxdelta;
}

int compare(const void *a,const void *b){
    MEET* tmp1=(MEET*)a;
    MEET* tmp2=(MEET*)b;
    if(tmp1->start<tmp2->start){
        return -1;
    }
    else if(tmp1->start>tmp2->start){
        return 1;
    }
    else{
        if(tmp1->end>tmp2->end){
            return 1;
        }
        else{
            return 0;
        }
    }
}