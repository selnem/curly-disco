#include <stdio.h>
#include <string.h>

/* 변수 선언 부분: 수정하지 마세요 */
#define price_americano 3500
#define price_icetea 3000
#define price_smoothie 5000
#define price_carrot 7000
#define price_cheese 6000
#define price_choco 5500
/* ------------------------------ */

int main(){
    /* 변수 선언 부분: 수정하지 마세요 */
    int num_americano;
    int num_icetea;
    int num_smoothie;
    int num_carrot;
    int num_cheese;
    int num_choco;
    int num_set1;
    int num_set2;
    int total_price_set1;
    int total_price_set2;
    int total_price;
    /* ------------------------------ */
    
    // 반드시 다음 코드 사용해서 출력하세요. 
    // 주문 받을 때: printf("주문하고자 하는 음료(커피, 아이스티, 스무디)와 케잌(당근, 치즈, 초코)의 갯수를 각각 입력하세요:\n"); 이용하여 출력
    // 음료 갯수가 10개 넘었을 때: printf("음료 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n"); 이용하여 출력
    // 케잌 갯수가 10개 넘었을 때: printf("케잌 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n"); 이용하여 출력
    
    /*put your answer*/

    int drinkSum=0,cakeSum=0;
    //합으로 계산할 요소들 초기화
    num_set1=0;
    num_set2=0;
    total_price_set1=0;
    total_price_set2=0;
    total_price=0;

    typedef struct menu{
        int *num_menu;
        int Menu_price;
    }St_menu;

    St_menu drink_arr[3]={{&num_americano,price_americano},{&num_icetea,price_icetea},{&num_smoothie,price_smoothie}};
    St_menu cake_arr[3]={{&num_carrot,price_carrot},{&num_cheese,price_cheese},{&num_choco,price_choco}};
    St_menu temp;
    while(1){
        drinkSum=0;
        cakeSum=0;
        printf("주문하고자 하는 음료(커피, 아이스티, 스무디)와 케잌(당근, 치즈, 초코)의 갯수를 각각 입력하세요:\n");
        for(int i=0;i<3;i++){
            scanf("%d",drink_arr[i].num_menu);
        }
        for(int i=0;i<3;i++){
            scanf("%d",cake_arr[i].num_menu);
        }
        for(int i=0;i<3;i++){
            drinkSum+= *(drink_arr[i].num_menu);
            cakeSum+= *(cake_arr[i].num_menu);
        }
        if(drinkSum>10){
            printf("음료 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n");
            continue;
        }
        else if(cakeSum>10){
            printf("케잌 갯수가 10개를 넘었습니다. 다시 주문해주세요.\n\n");
            continue;
        }
        else{
            break;
        }        
    }
    //구조체 배열 버브 정렬 가격순 정렬 케이크 음료 각각
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            if(drink_arr[j].Menu_price<drink_arr[j+1].Menu_price){
                temp=drink_arr[j];
                drink_arr[j]=drink_arr[j+1];
                drink_arr[j+1]=temp;
            }
            if(cake_arr[j].Menu_price<cake_arr[j+1].Menu_price){
                temp=cake_arr[j];
                cake_arr[j]=cake_arr[j+1];
                cake_arr[j+1]=temp;
            }
        }
    }

     while(cakeSum>=2&&drinkSum>=2){
        int Dcnt=2,Ccnt=2;//음료 케이크 빼야할 횟수
        int Dindex=0,Cindex=0;
        while(Dcnt>0){
            if((*(drink_arr[Dindex].num_menu))>0){
                Dcnt--;
                *(drink_arr[Dindex].num_menu)-=1;
                total_price_set1+=drink_arr[Dindex].Menu_price;
            }
            else{
                Dindex++;
            }
        }
        while(Ccnt>0){
            if((*(cake_arr[Cindex].num_menu))>0){
                Ccnt--;
                *(cake_arr[Cindex].num_menu)-=1;
                total_price_set1+=cake_arr[Cindex].Menu_price;
            }
            else{
                Cindex++;
            }
        }
        cakeSum-=2;
        drinkSum-=2;
        num_set1++;
    }
    while(cakeSum>=1&&drinkSum>=2){
        int Dcnt=2,Ccnt=1;//음료 케이크 빼야할 횟수
        int Dindex=0,Cindex=0;
        while(Dcnt>0){
            if(*(drink_arr[Dindex].num_menu)>0){
                Dcnt--;
                *(drink_arr[Dindex].num_menu)-=1;
                total_price_set2+=drink_arr[Dindex].Menu_price;
            }
            else{
                Dindex++;
            }
        }
        while(Ccnt>0){
            if(*(cake_arr[Cindex].num_menu)>0){
                Ccnt--;
                *(cake_arr[Cindex].num_menu)-=1;
                total_price_set2+=cake_arr[Cindex].Menu_price;
            }
            else{
                Cindex++;
            }
        }
        cakeSum-=1;
        drinkSum-=2;
        num_set2++;
    }
    total_price_set1*=0.8;
    total_price_set2*=0.9;
    for(int i=0;i<3;i++){
        total_price+=(drink_arr[i].Menu_price * *(drink_arr[i].num_menu));
        total_price+=(cake_arr[i].Menu_price * *(cake_arr[i].num_menu));
    }
    total_price+=(total_price_set1+total_price_set2);
    
    /* 출력 부분: 수정하지 마세요 */ 
    printf("\n품목      갯수   금액\n");
    if (num_set1 > 0)
        printf("세트1    %4d %7d\n",num_set1, total_price_set1);
    if (num_set2 > 0)
        printf("세트2    %4d %7d\n", num_set2, total_price_set2);
    if (num_americano > 0)
        printf("커피     %4d %7d\n", num_americano, price_americano * num_americano);
    if (num_icetea > 0)
        printf("아이스티 %4d %7d\n", num_icetea, price_icetea * num_icetea);
    if (num_smoothie > 0)
        printf("스무디   %4d %7d\n", num_smoothie, price_smoothie * num_smoothie);
    if (num_carrot > 0)
        printf("당근케잌 %4d %7d\n", num_carrot, price_carrot * num_carrot);
    if (num_cheese > 0)
        printf("치즈케잌 %4d %7d\n", num_cheese, price_cheese * num_cheese);
    if (num_choco > 0)
        printf("초코케잌 %4d %7d\n", num_choco, price_choco * num_choco);
    printf("----------------------------\n");
    printf("총 지불 금액 %8d\n", total_price);
    /* ------------------------- */

    return 0;

}