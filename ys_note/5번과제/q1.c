#include<stdio.h>
#include<stdlib.h>
#define READ_BUFFER 50

int readfile(FILE*rp);

int main(){
    FILE *fp=NULL;
    char file_name[20];
    char menu;
    int end;
    printf("Enter the file name: ");
    scanf("%s",file_name);
    fp=fopen(file_name,"r");
    if(fp==NULL){
        printf("\nfile open error.\n");
        exit(1);
    }
    while(readfile(fp)){
        while(1){
            printf("Enter 'n' for next page, 'q' to quit:");
            scanf("\n%c",&menu);
            

            if((menu=='n'||menu=='q')){
               break;
            }
            else{
                printf("\nInvelid input. Try agin\n");
                continue;
            }
        }
        if(menu=='q'){
            printf("Exiting program.");
            break;
        }
    }
    fclose(fp);
    return 0;
}

int readfile(FILE*rp){
    char temp[READ_BUFFER];
    printf("\n");
    for(int i=0;i<20;i++){
        if(fgets(temp,READ_BUFFER,rp)!=NULL){
            printf("%s",temp);
        }
        else{
            printf("\n End of file reached");
            return 0;
            break;
        }
    }
    return 1;
}