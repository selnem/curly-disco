#include <stdio.h>
#include <stdlib.h>
#include "_inc_i.h"
#include "_reset.h"


extern int i;

int main()
{
   int i2, j;
   i2=1;
   i2 = reset();
   for (j = 0; j < 3; j++)
      printf("i=%d; inc_i()=%d; new(i)=%d\n",
	     i2, inc_i(), new_(i2));

   if (getchar() == '0')
   {
	exit(0);
   }
   return 0;
}
