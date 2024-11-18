#include <stdio.h>

int main(void)
{
    /* 변수 선언 부분: 수정하지 마세요 */
    int price_coffee = 3000; // 커피, 케잌, 샌드위치 가격
    int price_cake = 6000;
    int price_sandwich = 5000;
    int num_coffee; // 커피, 케잌, 샌드위치 주문 수량
    int num_cake;
    int num_sandwich;
    int num_set; // 세트 메뉴 갯수
    int set_price; //세트 메뉴 가격
    int total_price; // 합계 금액
    /* ------------------------------ */
    do{
        printf("주문하고자 하는 커피, 케잌, 샌드위치의 갯수를 각각 입력하세요:\n");
        scanf("%d %d %d",&num_coffee,&num_cake,&num_sandwich);
    }while(!(0<=num_coffee&&num_coffee<=10&&0<=num_cake&&num_cake<=10&&0<=num_sandwich&&num_sandwich<=10));
    /* -------------------------- */
    num_set=0;
    while(num_coffee!=0&&num_cake!=0&&num_sandwich!=0){
        num_set++;
        num_coffee--;
        num_cake--;
        num_sandwich--;
    }
    if(num_set>1){
        set_price=(price_coffee+price_cake+price_sandwich)*0.8;
    }
    else{
        set_price=(price_coffee+price_cake+price_sandwich)*0.9;
    }
    set_price*=num_set;
    total_price=num_cake*price_cake+num_sandwich*price_sandwich+num_coffee*price_coffee+set_price;
    /* 출력 부분: 수정하지 마세요 */
    printf("품목      가격  갯수   금액\n");
    if (num_set > 0)
        printf("세트 %9d %4d %7d\n", set_price, num_set, set_price);
    if (num_coffee > 0)
        printf("커피 %9d %4d %7d\n", price_coffee, num_coffee, price_coffee * num_coffee);
    if (num_cake > 0)
        printf("케잌 %9d %4d %7d\n", price_cake, num_cake, price_cake * num_cake);
    if (num_sandwich > 0)
        printf("샌드위치 %5d %4d %7d\n", price_sandwich, num_sandwich, price_sandwich * num_sandwich);
    printf("----------------------------\n");
    printf("총 지불 금액 %14d", total_price);
    /* ------------------------- */

    return 0;
}