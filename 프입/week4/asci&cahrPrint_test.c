#include <stdio.h>
int main(){
    printf("print char\n");
    
    char ch_arr[]={'N',73,'d','m','K','-',111,71,'\n'};
    int ch_order[10]={5,1,0,7,5,2,6,3,8};
    for(int i=0;i<8;i++){
        putchar(ch_arr[ch_order[i]]);
    }
    return 0;
}