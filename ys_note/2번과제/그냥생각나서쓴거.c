#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *p,int n);

int main(void){ 
    int n,multiply=1, start_num;

    printf("input size of arr:");
    scanf("%d",&n);

    int *arrNums=(int*)malloc(sizeof(int)*n);
  
    printf("input num n time's");
    for(int i=0;i<n;i++){
        scanf("%d",&arrNums[i]);
    }

    bubble_sort(arrNums,n);

    printf("arr of nums");
    for(int i=0;i<n;i++){
        printf(" %d",arrNums[i]);
    }
    printf("\n");
    
    start_num=arrNums[0]%2==0 ? arrNums[0]+2:arrNums[0]+1;

    printf("min=%d,max=%d\n",arrNums[0],arrNums[n-1]);
    printf("multiplyOfNums=");

    for(int k=start_num;k<arrNums[n-1];k+=2){
        multiply*=k;
        printf(" %d",k);
    }
    free(arrNums);

    printf("\nmultiply_result=%d",multiply);
    
    return 0;

}

int bubble_sort(int *p,int n){
    int temp;
    for (int i = 0; i < n-1; i++){  
        for (int j = 0; j < n - i -1; j++){
            if (p[j] >p[j + 1]){
                temp = p[j];
                p[j]  = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    return 0;
}