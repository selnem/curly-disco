#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int **House=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        *(House+i)=(int*)malloc(sizeof(int)*3);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&House[i][j]);
        }
    }
    for(int i=0;i<n-1;i++){
        House[i+1][0]+=(House[i][1]<House[i][2]?House[i][1]:House[i][2]);
        House[i+1][1]+=(House[i][0]<House[i][2]?House[i][0]:House[i][2]);
        House[i+1][2]+=(House[i][0]<House[i][1]?House[i][0]:House[i][1]);
    }
    int min=House[n-1][0];
    for(int i=1;i<3;i++){
        if(min>House[n-1][i]){
            min=House[n-1][i];
        }
    }
    printf("%d",min);
    for(int i=0;i<n;i++){
        free(House[i]);
    }
    free(House);
    return 0;
}