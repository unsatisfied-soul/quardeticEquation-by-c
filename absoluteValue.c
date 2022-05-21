#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

int main(){
    // int result = abs(-25);
    // printf("%d", result);

    int number,result;
    printf("enter a number :");
    scanf("%d", &number);
    result = abs(number);
    printf("%d", result);
    return 0;
}