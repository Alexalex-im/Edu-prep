#include <stdio.h>
void main()
{
    int a = 100;
    int b = 202;
    clrscr();

    if ( a == 100)
    {
        printf("Value A is 100 \n");
        if (b == 200)
        {
            printf("Value of a is 100 and 6 is 200 \a");
        }
    }else if (a == 102) {
        printf("Value of A is 102");
        printf("Exact value of a is : %d \a", a);
        printf("Exact value of b is : %d \a", b);
        getch();
    } else if (a == 102){
        printf(" Value of a is 102 \n");
        if (b == 200)
        {
            if (b < 400) {
                printf("b is less than 400");
            }
        }
    }
}