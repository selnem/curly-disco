#include<stdio.h>
#include<stdlib.h>
int loop=0;

struct tomato
{
    int y;
    int x;
};

int serch_tomato(int **tomato_box, struct tomato *queue,int index,int *total,int m,int n);

int main(){
    int m,n,index=0,total;
    

    scanf("%d %d",&m,&n);
    total=m*n;

    int** tomato_box=(int**)malloc(sizeof(int*)*n);

    for(int i=0;i<n;i++){
        tomato_box[i]=(int*)malloc(sizeof(int)*m);
    }

    struct tomato* queue=(struct tomato*)malloc(sizeof(struct tomato)*m*n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&tomato_box[i][j]);
            if(tomato_box[i][j]==1){
                queue[index].y=i;
                queue[index].x=j;
                index++;
                total--;
            }
            else if(tomato_box[i][j]==-1){
                total--;
            }
        }
    }
    serch_tomato(tomato_box,queue,index, &total,m,n);
    if(total>0){
        printf("%d",-1);
    }
    else{
        printf("%d",loop-1);
    }
    
    for(int i=0;i<n;i++){
        free(tomato_box[i]);
    }
    free(tomato_box);
    
    return 0;
}
int serch_tomato(int **tomato_box, struct tomato *queue,int index,int *total,int m,int n){
    int x_move[4]={-1,0,1,0};
    int y_move[4]={0,-1,0,1};
    int new_index=0;
    struct tomato* new_queue=(struct tomato*)malloc(sizeof(struct tomato)*m*n);
    if(index==0){
        free(queue);
        return 0;
    }
    for(int i=0;i<index;i++){
        for(int j=0;j<4;j++){
            int mdX=queue[i].x+x_move[j],mdY=queue[i].y+y_move[j];
            if(mdX<m&&mdY<n&&mdX>=0&&mdY>=0){
                if(tomato_box[mdY][mdX]==0){
                    tomato_box[mdY][mdX]=1;
                    (*total)--;
                    new_queue[new_index].x=mdX;
                    new_queue[new_index].y=mdY;
                    new_index++;
                }
            }
        }
    }
    loop++;
    free(queue);
    serch_tomato(tomato_box,new_queue,new_index,total,m,n);
    return 0;
}