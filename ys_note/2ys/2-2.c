#include <stdio.h>
int main(void)
{
    int h=7;
    for (int i=h;i>=1;i--)
    {
        for (int k=0;k<h-i;k++)
        {
            printf("  ");  
        }
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");     
    }
    return 0;
}