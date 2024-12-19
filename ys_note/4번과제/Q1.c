#include<stdio.h>
#define Arr_SIZE 5
float *Find_Maxfloat(float*arr,int size);
int main(){
    float arr[Arr_SIZE]={3.2,5.5,7.8,2.4,8.0};
    float *p=arr;
    printf("Array: ");
    //arr=>110 arr[0]== *(arr+0)
    for(int i=0;i<Arr_SIZE;i++){
        printf("%.1f ",*(p+i));
    }
    max=*find~~~~()
    printf("\n Max value: %.1f\n Max value address: %p",*Find_Maxfloat(p,Arr_SIZE),Find_Maxfloat(p,Arr_SIZE));
    return 0;
}
float *Find_Maxfloat(float *arr,int size){
    float *max;
    max=&arr[0];
    for(int i=1;i<size;i++){
        if(*max<*(arr+i)){
            max=(arr+i);
        }
    }
    return max;
}