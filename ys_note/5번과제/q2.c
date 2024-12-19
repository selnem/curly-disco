#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char inName[20];
    char outName[20];
    char temp;
    FILE* inFile;
    FILE* outFile;
    
    printf("Enter input File name: ");
    scanf("%s",inName);
    if((inFile=fopen(inName,"r"))==NULL){
        printf("Worng input file Name");
        exit(1);
    }
    printf("Enter output file name: ");
    scanf("%s",outName);
    if((outFile=fopen(outName,"w"))==NULL){
        printf("Worng output file Name");
        exit(1);
    }
    while((temp=fgetc(inFile))!=EOF){
        if(!(48<=temp&&temp<=57)){
            if(65<=temp&&temp<=90){
                temp+=32;
            }
            fputc(temp,outFile);
        }
    }
    printf("File transformed and copied to '%s'",outName);
    fclose(inFile);
    fclose(outFile);
    return 0;

}