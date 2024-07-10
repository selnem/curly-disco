
#include <stdio.h>

int main(void)
{
	int a = 10;
	
	int * * *   * * * p ;
	
	p = (int * * *   * * * )&a ;
	
	printf("%d", *p);
    return 0;
} 
