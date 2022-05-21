#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int x1,x2;
    printf("enter main number: ");
    scanf("%d", &x1);
    printf("enter power number: ");
    scanf("%d", &x2);
    double value = pow(x1, x2);
    printf("result is %.2lf", value);
}