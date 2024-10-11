#include <stdio.h>
float accumulator;
int calculate(char cmd,float num1){
    
    switch ((int)cmd){
        case (int)'S':
            accumulator=num1;
            printf("= %f",accumulator);
            break;

        case (int)'/':
            accumulator/=num1;
            printf("= %f",accumulator);
            break;

        case (int)'+':
            accumulator+=num1;
            printf("= %f",accumulator);
            break;
        case (int)'*':
            accumulator*=num1;
            printf("= %f",accumulator);
            break;
        case (int)'-':
            accumulator-=num1;
            printf("= %f",accumulator);
            break;
        case (int)'E':
            printf("= %f",accumulator);
            break;


    }
    return 0;
}
int main(){
    char cmdOfcal;
    float num_in;
    while(1){
        scanf("%f %c",&num_in,&cmdOfcal);
        calculate(cmdOfcal,num_in);
        if(cmdOfcal=='E'){
            break;
        }
    }
    
    return 0;
    }