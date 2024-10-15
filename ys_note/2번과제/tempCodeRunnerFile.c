#include<stdio.h>
int main(){
    int arr[5][5]={{1,0,0,1,0},{1,1,0,1,1},{0,1,0,0,1},{1,1,1,0,0},{0,0,1,1,1}};
    int arrOfNum[5][2];
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]+arr[i][j+1]+arr[i][j+2]==3){
                arrOfNum[k][0]=i;
                arrOfNum[k][1]=j;
                k++;
                break;
            }
        }
        
    }
    int sum=0;
    for(int s=0;s<k;s++){
        printf("%d's location,%p\n",s+1,&arr[arrOfNum[s][0]][arrOfNum[s][1]]);
        sum+=sizeof(arr[arrOfNum[s][0]][arrOfNum[s][1]])*3;
    }
    printf("\n");
    printf("sum of size %d",sum);
    return 0;
    //ㅁㄴㅇㄹ
}