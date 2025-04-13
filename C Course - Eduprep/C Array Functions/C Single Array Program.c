#include <stdio.h>
void main()
{
    int stdid1, stdid2, stdid3, stdid4, stdid5;
    clrscr();
    stdid1 = 100;
    stdid2 = 200;
    stdid3 = 300;
    stdid4 = 400;
    stdid5 = 500;
    printf("value1 = %d \n value2 = %d \n value3 = %d \n value4 = %d \n value5 = %d \n", stdid1,stdid2,stdid3,stdid4,stdid5);
    getch();
}


#include<stdio.h>
void main()
{
    int stdid[5] = {100, 200, 300, 400, 500};
    printf("Current Result \n");
    printf("value1 = %d \n value2 = %d \n value3 = %d \n value4 = %d \n value5 = %d \n", stdid[1],stdid[2],stdid[3],stdid[4],stdid[5]);
    clrscr();
    getch();

}