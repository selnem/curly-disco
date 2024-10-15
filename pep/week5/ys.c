#include <stdio.h>
int main(void)
{
    int c ;
    double f ;
    printf("섭씨온도를 입력하시오.\n");
    scanf("%d",&c);
    f=1.8*c+32;
    printf("화씨온도는 %5.2lf입니다.\n",f);

    return 0;
}