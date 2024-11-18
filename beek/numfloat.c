#include<stdio.h>
int main(){
    int a,b,n,ans;
    scanf("%d %d %d",&a,&b,&n);
    for(int i=0;i<n;i++){
        a%=b;
        a*=10;
        ans=a/b;
    }
    printf("%d",ans);
    return 0;
}

