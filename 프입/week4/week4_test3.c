#include <stdio.h>

int main(){

    // 변수 선언
    unsigned char red,green,blue;
    int input;
    unsigned int rgb;

    printf("red값을 입력하세요: ");
    // red값 입력 및 변수 red에 할당
    scanf("%d",&input);
    red=(unsigned char)input;
    printf("green 입력하세요: ");
    // green값 입력 및 변수 green에 할당
    scanf("%d",&input);
    green=(unsigned char)input;
    printf("blue값을 입력하세요: ");
    // blue 입력 및 변수 blue에 할당 
    scanf("%d",&input);
    blue=(unsigned char)input;


    // rgb 출력
    rgb = red | (green << 8) | (blue << 16) ;//이거 bgr 순서아닌가??
    printf("RGB 트루컬러: %06x\n",rgb);

    return 0;
    
}