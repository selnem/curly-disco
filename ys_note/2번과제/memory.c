#include<stdio.h>
int main(){
    int a[2][2][2]={{{1,1},{1,1}},{{1,1},{1,1}}},sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for (int k=0;k<2;k++){
                sum+=sizeof(a[i][j][k]);
                printf("i=%d,j=%d,k=%d,location%p\n",i,j,k,&a[i][j][k]);
            }
        }
    }
    
    printf("%d",sum);
    return 0;

}
