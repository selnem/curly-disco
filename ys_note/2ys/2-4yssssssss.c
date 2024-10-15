#include <stdio.h>
int main(void)
{
    int a[3];
    int max, min, multiply=1, start_num;
    printf("input num 3time's");

    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(int i=1;i<=2;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    for(int i=1;i<=2;i++){
        if(min>a[i]){
            min=a[i];
        }
    }

    if(min%2==0){
        start_num=min+2;
    }
    else{
        start_num=min+1;
    }
    printf("min=%d,max=%d\n",min,max);
    for(int k=start_num;k<max;k+=2){
        multiply*=k;
        printf("multiply nums=%d\n",k);
    }

    printf("multiply_result=%d",multiply);
    
    return 0;


}