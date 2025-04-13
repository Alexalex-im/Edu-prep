#include <stdio.h>
void main()
{
    int clsAtdid[5] = {1, 2, 3, 4, 5};
    int clsBtdid[5] = {6, 7, 8, 9, 10};
    int clsstdid[5] = {11, 12, 13, 14, 15};
    clrscr();
    printf("%d \n", clsBtdid[1]);
    printf("%d \n %d \n %d \n",clsAtdid[1], clsBtdid[1], clsstdid[1]);
    getch();
}


#include <stdio.h>
void main()
{
    int stdid[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    clrscr();
    printf("%d \n", stdid[1][1]);
    printf(" %d \n %d \n", stdid[0][1], stdid[1][1], stdid[2][1]);
    getch();
}