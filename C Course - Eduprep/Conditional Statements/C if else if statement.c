#include <stdio.h>
void main()
{
    int a=10, a=30;
    clrscr();
    if (a == 10)
    {
        printf("Value of a is 10 \n");
    }
    else if ( a == 20)
    {
        printf("Value of a is 20 \n");
    }
    else if (a == 30)
    {
        printf("Value of a is 30 \n");
    }
    else {
        printf("None of the value is matching \n");
    }
    printf("Exact value of a is : %d \n", a);
    getch();
}