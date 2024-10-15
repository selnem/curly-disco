#include <stdio.h>
int main(void)
{
    int h=4;
    for (int i=h;i>=1;i--)
    {
        for (int k=0;k<h-i;k++)
        {
            printf("  ");
        }
        for (int j=h*2-1;j>=2*(h-i)+1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
