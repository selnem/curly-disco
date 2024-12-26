#include<stdio.h>
long int gcd(long int a,long int b);
long int lcm(long int a, long int b);
int count(long int k);
int cal(int N);

int main(){
    int cnt=0;
    int N[1000];
    while(scanf("%d",&N[cnt])!=EOF){
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        cal(N[i]);
    }
    return 0;
}
int cal(int N){
    long int D=1,U=0,temp;
    for(int i=1;i<=N;i++){
        D=lcm(D,i);
    }
    for(int j=1;j<=N;j++){
        U+=D/j;
    }
    temp=D;
    U*=N;
    D/=gcd(temp,U);
    U/=gcd(temp,U);
    if(U%D==0){
        printf("%ld\n",U/D);
    }
    else{
        for(int i=0;i<=count(U/D);i++){
            printf(" ");
        }
        printf("%ld\n",U%D);
        printf("%ld ",U/D);
        for(int i=0;i<count(D);i++){
            printf("-");
        }
        printf("\n");
        for(int i=0;i<=count(U/D);i++){
            printf(" ");
        }
        printf("%ld\n",D);
        
    }

    return 0;
}
int count(long int k){
    int cnt=0;
    while(k>0){
        k/=10;
        cnt++;
    }
    return cnt;
}
long int gcd(long int a,long int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
long int lcm(long int a,long int b){
    return a*b/gcd(a,b);
}
