#include<stdio.h>

typedef struct complex_num{
    double real;
    double image;
}complex;

complex paircomplex(complex *p);
double multiplycomplex(complex *p1,complex *p2){
    
    double ans=(p1->real)*(p2->real)-(p1->image)*(p2->image);
    return ans;
}
int main(){
    complex in_Complex,pair_Complex;
    printf("<complex calulater>\n\n");
    printf("Enter the real part: ");
    scanf("%lf",&in_Complex.real);
    printf("Enter the imaginary part: ");
    scanf("%lf",&in_Complex.image);
    printf("\n\nInput complex :%.2lf %+.2lfi\n",in_Complex.real,in_Complex.image);
    pair_Complex=paircomplex(&in_Complex);
    printf("\nPair complex: %.2lf %+.2lfi \n",pair_Complex.real,pair_Complex.image);
    printf("\n\nmultiply input x pair %.2lf: ",multiplycomplex(&in_Complex,&pair_Complex));
    return 0;

}
complex paircomplex(complex *p){
   complex pair;
   pair.real=(p->real);
   pair.image=(-(p->image));
   return pair;
}