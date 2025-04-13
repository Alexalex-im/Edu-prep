#include<stdio.h>
int main()
{
    int a=9, b=4,c;
    clrscr();
    c = a + b;
    printf("a + b = %d \n", c);
    c = a - b;
    printf("a - b = %d \n", c);
    c = a * b;
    printf("a * b = %d \n", c);
    c = a / b;
    printf("a / b = %d \n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n", c);
    getch();
}


#include<stdio.h>
void main()
{
    int a=90, b=40, c;
    float d;
    d = a/b;
    printf("a/b = %f \n", d);
    getch();
}