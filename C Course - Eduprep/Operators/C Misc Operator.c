#include<stdio.h>
void main()
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;
    clrscr();
    e = (a + b) * c/d;
    printf("Value of (a + b) * c/d is : %d \n ", e);
    e = ((a + b) * c) /d;
    printf("Value of ((a + b) * c) /d is : %d \n ", e);
    e = (a + b) * (c/d);
    printf("Value of (a + b) * (c/d) is : %d \n ", e);
    e = a + (b * c) /d;
    printf("Value of a + (b * c) /d is : %d \n ", e);
    getch();
}