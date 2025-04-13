#include <stdio.h>
void main()
{
    int a = 100;    // a = 15
    clrscr();
    printf("Boolean value is %d \n", a < 20);
    if (a < 20)
    {
        printf(" a is less than 20 | a");
    }
    else {
        printf("a is not less than 20 | n");
    }
    getch();
}