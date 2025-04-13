#include <stdio.h>
void main()
{
    int a=21;
    int c;
    clrscr();
    c = a;
    printf("Line1 - == Operator Example value of c = %d \n ", c);
    c += a;
    printf("Line2 - += Operator Example value of c = %d \n ", c);
    c =- a;
    printf("Line3 - =- Operator Example value of c = %d \n ", c);
    c *= a;
    printf("Line4 - *= Operator Example value of c = %d \n ", c);
    c |=a;
    printf("Line5 - |= Operator Example value of c = %d \n ", c);
    c %= a;
    printf("Line6 - == Operator Example value of c = %d \n ", c);
    c <<= a;
    printf("Line7 - <<= Operator Example value of c = %d \n ", c);
    c >>= a;
    printf("Line8 - >>= Operator Example value of c = %d \n ", c);
    c &= a;
    printf("Line9 - &= Operator Example value of c = %d \n ", c);
    c ^= a;
    printf("Line1 - ^= Operator Example value of c = %d \n ", c);
    c |= a;
    printf("Line1 - |= Operator Example value of c = %d \n ", c);
    getch();
}