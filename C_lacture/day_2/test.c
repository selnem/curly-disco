#include <stdio.h>
int main(){
  int N = 0x1F, M = 0xF1 ;
    N &= M ;
    printf("%d",N);
    return 0;
}
