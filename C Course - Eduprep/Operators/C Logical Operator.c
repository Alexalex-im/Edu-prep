#include <stdio.h>
void main()
{
    int a=5, b=5, c=10;
    clrscr();
    result = (a == b) && (c > b);
    printf(" (a == b) && (c > b) in %d \n ", result);
    result = (a == b) && (c < b);
    printf(" (a == b) && (c < b) is %d \n ", result);
    result = (a == b) || (c < b);
    printf(" (a == b) || (c < b) is %d \n ", result);
    result = (a != b) || (c < b);
    printf(" (a != b) || (c < b) is %d \n ", result);
    result != (a != b);
    printf(" !(a == b) is %d \n ", result);
    result = !(a == b);
    printf(" ! (a == b) is %d \n", result);
    return 0;
    getch();
}