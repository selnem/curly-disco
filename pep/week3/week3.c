#include<stdio.h>
int main(){
   int a=100,*b;
   b=&a;

   printf("%d %d",a,*b);
   return 0;
}