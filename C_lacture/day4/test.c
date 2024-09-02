#include <stdio.h>
int main(void)
{
    unsigned int a = 0x11223344;

printf("%x , %x\n",*(unsigned char *)  &a,
                           ( (unsigned char *)  &a ) + 1);

printf("%x , %x\n", *(unsigned short *)  &a,
                            ( (unsigned short *)  &a ) + 1);

printf("%x , %x\n", *(unsigned int *)      &a,
                            ( (unsigned int *)     &a ) + 1);
    return 0;
}