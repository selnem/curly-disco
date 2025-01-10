#include<stdio.h>
int main(){
    int Q,a;
    scanf("%d",&Q);
    for(int i=0;i<Q;i++){
        scanf("%d",&a);
        printf("%d\n",a==((a)&(-a)));
    }
    return 0;
}