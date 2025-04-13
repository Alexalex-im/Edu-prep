#include<stdio.h>
#include "my_header.c"
int main()
{
    printf("ADD : %d \n", add(3,7));
    printf("Sub : %d \n", sub(6,2));
    printf("Mul : %d \n", mul(9,1));
    printf("Div with second number non- zero : %f \n", div(-15, -5));
    printf("Div with second number zero : %f \n", div (8, 0));
    printf("MOD : %f \n", mod(11,5));
    return 0;
}