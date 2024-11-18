#include <stdio.h>
#include <math.h>
int digits=1;

int get_digits2(int Num);
int get_backward2(int Num);

void main(){
    int input_Num;
    do{
        printf("정수를 입력하세요.\n");
        scanf("%d",&input_Num);
    }while(!(input_Num>0));
    printf("\n입력한 정수의 각 자릿수를 출력:\n");
    get_digits2(input_Num);
    printf("\n입력한 정수를 거꾸로 출력:\n");
    get_backward2(input_Num);
    return;
}
int get_digits2(int Num){
    if(Num<=0){
        digits=1;
        return 0;
    }
    printf("%d의 자릿수: %d\n",digits, Num%10);
    digits*=10;
    get_digits2(Num/10);
    return 0;
}
int get_backward2(int Num){
    if(Num<=0){
        return 0;
    }
    printf("%d", Num%10);
    get_backward2(Num/10);
    return 0;
}
/* 입출력시 반드시 다음 코드를 복사해서 사용
printf("정수를 입력하세요.\n");
scanf("%d", 변수);
printf("\n입력한 정수의 각 자릿수를 출력:\n");
printf("%d의 자릿수: %d\n", 변수, 변수);
printf("\n입력한 정수를 거꾸로 출력:\n");
printf("%d", 변수);
*/
    
