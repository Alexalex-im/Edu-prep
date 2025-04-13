#include <stdio.h>
int main()
{
    static int x;
    int y;
    printf("%d \n %d", x,y);
}

int fun()
{
    static void count = 0;
    count++;
    return count;
}

void main()
{
    clrscr();
    printf("First time = %d", fun());
    printf("Second time = %d", fun());
    getch();
}

int fun()
{
    static void count = 0;
    count = count + 1;
    return count;
}


void main()
{
    clrscr();
    printf("First time = %d", fun());
    printf("\n Second time = %d", fun());
    getch();
}


void main()
{
    static int x;
    int y;
    clrscr();
    printf("Value of x = %d", fun());
    printf("\n Value of y = %d", fun());
    getch();
}
