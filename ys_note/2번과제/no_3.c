#include<stdio.h>
#include<math.h>
int main(){
    int prime_num,sum=0,i=2;


    while(1){
        int bool_prime=1;
        
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                bool_prime=0;
            }
        }
        if(bool_prime==1){
            if(sum+i<2000){
                sum+=i;
                prime_num=i;
            }
            else{
                break;
            }
        }
        i++;

    }
    printf("sum of prime = %d, last prime num = %d",sum-prime_num,prime_num);
    return 0;
}