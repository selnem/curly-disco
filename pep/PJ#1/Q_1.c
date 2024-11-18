#include <stdio.h>
#include <math.h>

int get_digits1(int Num);//10^n-1번째 자릿수의 숫자 구하는 함수
int get_backwards1(int Num);//뒤에서 부터 앞으로 출력하는 함수

void main(){
    int input_Num;
    do{
        printf("정수를 입력하세요.\n");
        scanf("%d",&input_Num);
    }while(!(input_Num>0));
    printf("\n입력한 정수의 각 자릿수를 출력:\n");
    get_digits1(input_Num);
    printf("\n입력한 정수를 거꾸로 출력:\n");
    get_backwards1(input_Num);
    return;
    
}

int get_digits1(int Num){
    int NumOfdigits,digits=1;
    while(Num>0){
        NumOfdigits=Num%10;
        Num/=10;
        printf("%d의 자릿수: %d\n",digits, NumOfdigits);
        digits*=10;
    }
    return 0;
}

int get_backwards1(int Num){
    int NumOfback;
    while(Num>0){
        NumOfback=Num%10;
        Num/=10;
        printf("%d", NumOfback);
    }
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

