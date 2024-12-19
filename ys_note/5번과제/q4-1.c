#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* infile;
    char inname[20];
    int start,end,sum,temp1,temp2,temp3;
    printf("enter the file name: ");
    scanf("%s",inname);
    if((infile=fopen(inname,"r"))==NULL){
        printf("error");
        exit(1);
    }
    while(1){
        fscanf(infile,"%d %d %d",&temp1,&temp2,&temp3);
        if(temp3<300){
            start=temp1;
            end=temp2;
            sum=temp3;
        }
        else{
            printf("\n누적합 300 미만지점  %d \n sum=%d",end,sum);
            break;
        }
    }
    return 0;
}