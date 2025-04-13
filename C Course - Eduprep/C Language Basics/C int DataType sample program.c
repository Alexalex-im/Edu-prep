#include <stdio.h>
void main()
{
    int a, b, c;
    clrscr();
    printf("Enter First Value");
    scanf("%d", &a);
    printf("Enter Second Value");
    scanf("%d", &b);
    printf("Output value is : ");
    c = a + b;
    printf("%d", c);
    getch();
}