#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;
    clrscr();
    printf("%d == %d is %d \n" , a,b, a==b);
    printf("%d == %d is %d \n" , a,c, a==c);
    printf("%d == %d is %d \n" , a,b, a>b);
    printf("%d == %d is %d \n" , a,b, a>c);
    printf("%d == %d is %d \n" , a,b, a<b);
    printf("%d == %d is %d \n" , a,b, a<c);
    printf("%d == %d is %d \n" , a,b, a!=b);
    printf("%d == %d is %d \n" , a,b, a!=c);
    printf("%d == %d is %d \n" , a,b, a>=b);
    printf("%d == %d is %d \n" , a,b, a>=c);
    printf("%d == %d is %d \n" , a,b, a<=b);
    printf("%d == %d is %d \n" , a,b, a<=c);
    getch();
}