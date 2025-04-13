#include <stdio.h>
void main()
{
    int a = 15;
    clrscr();
    printf("statement return value %d \n", a < 20);
    if (a < 20)
    {
        printf("a is less than 20 \n");
    }
    printf("Value of a is : %d \n", a);
    getch();
}