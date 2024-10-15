#include<stdio.h>
int print_star(int n){
        for (int i=0;i<n;i++){
            printf("* ");
        }
        printf("\n");
  
    return 0;
}


int main(){
    int n=4;
    for(int i=1;i<=2*n;i++){
        if(i%2==0){
                print_star(i/2);
            }
        else{
            print_star(n-(i-1)/2);
        }
    }
     
        
    
    return 0;
}