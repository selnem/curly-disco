#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
int factorial(int n)
{
   count++;
   if (n <= 1)
      return 1;
   else
      return(n * factorial(n - 1));
}
int Combination(int n, int x) {
   return factorial(n) / factorial(x) * factorial(n - x);
}
int main(void) {
   int n, x;
   printf("n과 x를 입력하세요.(x는 n보다 같거나 작다)\n");
   scanf("%d %d", &n, &x);

   printf("조합: %d\n", Combination(n, x));
   printf("factorial 함수 호출 횟수 : %d", count);
}