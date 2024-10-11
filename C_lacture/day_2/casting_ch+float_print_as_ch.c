#include <stdio.h>
int main(){
    int x=1,a=1,y=0,b=0;
    y=++x;
    b=a++;
    printf("y:%d b:%d x:%d a:%d",y,b,x,a);
    return 0;
}