#include<stdio.h>
int main(){
    int num[3],max,min;
    for(int i=0;i<3;i++){
        scanf("%d",&num[i]);
    }
    max=num[0];

    for(int j=1;j<3;j++){
        if(max<num[j]){
            max=num[j];
        }
    }
    min=num[0];
    for(int i=1;i<3;i++){
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("%d",max*min);

    return 0;


}