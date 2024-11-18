#include<stdio.h>

void operation(int matA[][3],int matB[][3],int mode);

int main(){
    int A[3][3],B[3][3],mode;
    printf("input A matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("input B matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    mode=10;
    while(1){
        printf("input mode(+:1/-:2/*:3/transA:4/transB:5/exit 0)\n");
        scanf("%d",&mode);
        if(mode==0){
            printf("exit");
            break;
        }
        else{
            printf("ans\n");
            operation(A,B,mode);
            
        }
    }
    return 0;
}

void operation(int matA[][3],int matB[][3],int mode){
    int temp[3][3]={0};
    switch(mode){
        case 1: 
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",matA[i][j]+matB[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",matA[i][j]-matB[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for(int i=0;i<3;i++){
                for(int k=0;k<3;k++){
                    for(int j=0;j<3;j++){
                        temp[i][k]+=matA[i][j]*matB[j][k];
                    }
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",temp[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",matA[j][i]);
                }
                printf("\n");
            }
            break;
        case 5:
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",matB[j][i]);
                }
                printf("\n");
            }
            break;
        default:
            printf("error\n");
    }
}
