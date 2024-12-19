#include<stdio.h>
#include<stdlib.h>
int ReadLine(FILE*fp);
int main(){
    char inName_1[20];
    char inName_2[20];
    char temp1,temp2;
    FILE* inFile_1, *inFile_2;
    int a=1,b=1;


    printf("Enter first file name: ");
    scanf("%s",inName_1);
    if((inFile_1=fopen(inName_1,"r"))==NULL){
        printf("\n wrong file name\n");
        exit(1);
    }

    printf("Enter second file name: ");
    scanf("%s",inName_2);
    if((inFile_2=fopen(inName_2,"r"))==NULL){
        printf("\n wrong file name\n");
        exit(1);
    }
    while(1){
        if(a+b==2){
            a=ReadLine(inFile_1);
            b=ReadLine(inFile_2);
        }
        else{
            break;
        }
    }
    if(b==1){
        while(ReadLine(inFile_2));
    }
    if(a==1){
        while(ReadLine(inFile_1));
    }

    printf("\n\n All files processed.");

    fclose(inFile_1);
    fclose(inFile_2);
    return 0;
}
int ReadLine(FILE*fp){
    char temp=1;
    while(1){
        temp=fgetc(fp);
        if(temp=='\n'||temp==EOF){
            break;
        }
        printf("%c",temp);
    }
    printf("\n");

    if(temp==EOF){
        return 0;
    }
    else{
        return 1;
    }

}