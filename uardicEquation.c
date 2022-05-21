#include<stdio.h>

int main(){
    double a,b,c,d,x1,x2;
    printf("enter a,b,c value :");
    scanf("%f\n %f\n %f", &a,&b,&c);
    d= (b*b - 4*a*c)/2;
    x1 = (-b+d)/ (2*a);
    x2 = (-b-d)/ (2*a);

    printf("x1 = %.2f and x2 = %.2f", x1,x2);
}