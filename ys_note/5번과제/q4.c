#include<stdio.h>
#include<stdlib.h>

int sumfuc(int end);

int main(){
    char outName[50];
    FILE* dbFile;
    printf("input file name: ");
    scanf("%s",outName);
    if((dbFile=fopen(outName,"w"))==NULL){
        printf("wrong file name");
        exit(1);
    }
    for(int i=1;i<=100;i++){    
        fprintf(dbFile,"%d %d %d \n",1,i,sumfuc(i));
    }

    
    fclose(dbFile);
    printf("\n\nprosess complited");
    return 0;
    
}

int sumfuc(int end){//start 1 fixed
    int sum=0;
    for(int i=1;i<=end;i++){
        sum+=i;
    }
    return sum;
}
