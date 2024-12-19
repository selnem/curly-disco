#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char name[50];
   float price;
   int stock;
}CART;

void add(CART* List, int Size);
int Remove(CART* List, int Size);
void checkout(CART* List, int Size);

int main(void) {
   char menu[10];
   char menu_arr[3][10] = { "add","remove","checkout" };
   CART* ShoppingList = (CART*)malloc(sizeof(CART)*1);
   int count=0;
   int i;
   do {
      printf("Enter command (add/remove/checkout):");
      scanf("%s", menu);
      for (i = 0; i < 3; i++) {
         if (strcmp(menu, menu_arr[i]) == 0) {
            break;
         }
      }
      switch (i) {
         case 0:
            count++;
            ShoppingList = (CART*)realloc(ShoppingList, count * sizeof(CART));
            add(ShoppingList, count); //함수호출
            break;
         case 1:
            if (Remove(ShoppingList, count)){
               count--;
               ShoppingList = (CART*)realloc(ShoppingList, count * sizeof(CART));
            }
            break;
         case 2:
            checkout(ShoppingList, count);
            break;
         default:
            printf("Error");
      }
      
   } while (i != 2 );
   free(ShoppingList);
   return 0;
}

void add(CART* List, int Size) {
   printf("Enter product name :");
   scanf("%s", List[Size - 1].name); 
   printf("Enter product price :");
   scanf("%f", &List[Size - 1].price);
   printf("Enter quantity :");
   scanf("%d", &List[Size - 1].stock);
   return;
}

int Remove(CART* List, int Size) {
   char find_product[50];
   printf("Enter the remove product:");
   scanf("%s", find_product);
   int i;
   for (i = 0; i < Size; i++) {
      if (strcmp(find_product, List[i].name) == 0) {
         break;
      }
   }
   if (i == Size) {
      printf("Not found\n");
      return 0;
   }
   else {
      for (int j = i; j < Size - 1; j++) {
         List[i] = List[i + 1];
      }
      return 1;
   }
   
}

void checkout(CART* List, int Size) {
   float sum=0;
   printf("\n\nCart Contents: \n");
   for (int i = 0; i < Size; i++) {
      printf("%d.", i + 1);
      printf("%s - $%.2f x %d =$ %.2f\n", List[i].name, List[i].price, List[i].stock, List[i].price * List[i].stock);
      sum += List[i].price * List[i].stock;
   }
   printf("\n\n");
   printf("Total Price : %.2f", sum);
   return;
}