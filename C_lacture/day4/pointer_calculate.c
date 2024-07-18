#include <stdio.h>


int main()
{

        // char, short, int, double

	int  numbers[5]={0,1,2,3,4}, * nptr = numbers;

	int  tempp, * ptempp;
	
	ptempp =   nptr  ++ ;

	tempp  =  *nptr  ++ ; 
	
	tempp  = (*nptr) ++ ; 

	tempp  = *(nptr  ++);
	
	tempp  = nptr - numbers ;




	return 0;   
}

