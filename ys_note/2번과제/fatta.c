#include <stdio.h>

int main() {

    int rows = 10;

    
    for (int i = 0; i < rows; i++) {
    
        for (int j = 0; j <= i; j++) {
            printf("%d ", 2 * j + 1); 
        }
        printf("\n"); 
    }

    return 0;
}