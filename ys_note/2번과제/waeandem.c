#include <stdio.h>

int main( ){
    int C;
    float F;

    printf("Enter temperature in Celcius: ");
    scanf("%d", &C);

    F=C*1.8+32;

    printf("Temperature in Fahrenheit: %5.2f\n", F);

    return 0;
}