#include <stdio.h>
int main(void)
{
    float accumulator,number2;
    char ope;
    printf("begin Calculations\n");
    do
    {
        scanf("%f %c",&number2,&ope);
        if (ope == 'S')
        {
            accumulator=number2;
            printf("= %f",accumulator); 
        }
        else if (ope == '/')
        {
            accumulator/=number2;
            printf("= %f",accumulator);
        }
        else if (ope == '-')
        {
            accumulator-=number2;
            printf("= %f",accumulator);
        }
        else if (ope == '*')
        {
            accumulator*=number2;
            printf("= %f",accumulator);
        }
        else if (ope == '+')
        {
            accumulator+=number2;
            printf("= %f",accumulator);
        }
        else if (ope == 'E')
        {
            printf("end of Calculations");
        }
        else 
        {
            printf("error");
        }
    } while (ope !='E');

    return 0;
}