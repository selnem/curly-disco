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
    int *mPointr_arr[6]={&num_americano,&num_icetea,&num_smoothie,&num_carrot,&num_cheese,&num_choco};
    int price_arr[6]={price_americano,price_icetea,price_smoothie,price_carrot,price_cheese,price_choco};
    int drinkSum=0,cakeSum=0;
    //합으로 계산할 요소들 초기화
    num_set1=0;
    num_set2=0;
    total_price_set1=0;
    total_price_set2=0;
    while(1){
        
        printf("주문하고자 하는 음료(커피, 아이스티, 스무디)와 케잌(당근, 치즈, 초코)의 갯수를 각각 입력하세요:\n");
        for(int i=0;i<6;i++){
            scanf("%d",mPointr_arr[i]);
        }
        for(int i=0;i<3;i++){
            drinkSum+= *mPointr_arr[i];
            cakeSum+= *mPointr_arr[i+3];
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
    while(cakeSum>=2&&drinkSum>=2){
        int Dcnt=2,Ccnt=2;//음료 케이크 빼야할 횟수
        int Dindex=2,Cindex=3;//Menu 배열 인덱스 음료 가격순서 2>1>0 케이크 3>4>5
        while(Dcnt>0){
            if(*mPointr_arr[Dindex]>0){
                Dcnt--;
                *mPointr_arr[Dindex]--;
                total_price_set1+=price_arr[Dindex];
            }
            else{
                Dindex--;
            }
        }
        while(Ccnt>0){
            if(*mPointr_arr[Cindex]>0){
                Ccnt--;
                *mPointr_arr[Cindex]--;
                total_price_set1+=price_arr[Cindex];
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
        int Dindex=2,Cindex=3;//Menu 배열 인덱스 음료 가격순서 2>1>0 케이크 3>4>5
        while(Dcnt>0){
            if(*mPointr_arr[Dindex]>0){
                Dcnt--;
                *mPointr_arr[Dindex]--;
                total_price_set2+=price_arr[Dindex];
            }
            else{
                Dindex--;
            }
        }
        while(Ccnt>0){
            if(*mPointr_arr[Cindex]>0){
                Ccnt--;
                *mPointr_arr[Cindex]--;
                total_price_set2+=price_arr[Cindex];
            }
            else{
                Cindex++;
            }
        }
        cakeSum-=1;
        drinkSum-=2;
        num_set2++;
    }
    
    

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