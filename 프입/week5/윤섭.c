#include <stdio.h>
int main(void){
    unsigned char number=176;
    unsigned char b=64;
    const unsigned char level =63;
    for(int i=0;i<7;i++){
        printf("%d",((number<<i)&b)>level);       
    }
    return 0;
}