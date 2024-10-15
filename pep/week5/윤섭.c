#include <stdio.h>
int main(void){
    unsigned char number=176;
    unsigned char b=128;
    const unsigned char level =128;
    for(int i=1;i<=7;i++){
        printf("%d",((number<<i)&b)>level);       
    }
    return 0;
}
