#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct St_cart{
    char name[50];
    float price;
    int quantity;
}product;

int size=0;
void Add(product *p);
int Remove(product *p);
void Checkout(product *p);

int main(){
    int menu_num;
    char input_menu[10];
    product *cart=NULL;
    //char menu[3][10]={"add","remove","checkout"};
    do{
        //menu_num=0;
        printf("Enter command (add/remove/checkout): ");
        scanf("%s",input_menu);
        /*
        for(;menu_num<3;menu_num++){
            if(0==strcmp(menu[menu_num],input_menu)){
            break;
            }
        }
        */
        if(strcmp("add",input_menu)==0){
            size++;
            cart=(product*)realloc(cart,size*sizeof(product));
            Add(cart);
        }
        else if(strcmp("remove",input_menu)==0){
            if(Remove(cart)){
                size--;
                cart=(product*)realloc(cart,size*sizeof(product));
            }
        }
        else if(strcmp("checkout",input_menu)==0){
            Checkout(cart);
            //여기에 break;를 넣고 do-while대신 while(1)로 작성가능
        }
        else{
            printf("error\n");
        }
        /*
        switch(menu_num){
            case 0:
                size++;
                cart=(product*)realloc(cart,size*sizeof(product));
                Add(cart);
                break;
            case 1:
                if(Remove(cart)){
                    size--;
                    cart=(product*)realloc(cart,size*sizeof(product));
                }
                break;
            case 2:
                Checkout(cart);
                break;
            default:
                printf("error\n");
        }
        */
    }while(strcmp("checkout",input_menu)!=0);//while(menu_num!=2);
    free(cart);
    return 0;
}
void Add(product *p){
    printf("Enter product name: ");
    scanf("%s",p[size-1].name);
    printf("Enter product price: ");
    scanf("%f",&p[size-1].price);
    printf("Enter quantity: ");
    scanf("%d",&p[size-1].quantity);
    printf("\n\n");
}
int Remove(product *p){
    char remove[50];
    int i;
    printf("Enter remove pruduct: ");
    scanf("%s",remove);
    for(i=0;i<size;i++){
        if(strcmp(p[i].name,remove)==0){
            break;
        }
    }
    if(i==size){
        printf("This is not in cart\n");
        return 0;
    }
    else{
        for(int k=i;k<(size)-1;k++){
            p[k]=p[k+1];
        }
        printf("\n\n");
        return 1;
    }
}
void Checkout(product *p){
    printf("Cart Contents: \n");
    float totalprice=0;
    for(int i=0;i<size;i++){
        printf("1. %s - $%.2f x %d = $%.2f\n",p[i].name,p[i].price,p[i].quantity,p[i].price*p[i].quantity);
        totalprice+=p[i].price*p[i].quantity;
    }
    printf("\n\nTotal Price: $%.2lf",totalprice);
}