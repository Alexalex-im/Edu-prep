#include <stdio.h>
void main()
{
    int a,b,c;
    int d;
    clrscr();
    printf("Enter the first value \n");
    scanf("%d", &a);
    printf("Enter the second value \n");
    scanf("%d", &b);
    printf("Type 1 to add \n Type 2 to subtract \n Type 3 to multiply \n Type 4 to subtract \n");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
            c = a + b;
            printf("Addition of two values = %d \n", c);
            break;

        case 2 :
            printf("How do you want to sub \n 1.Big number - small number \n");
            printf("2.First number - second number \n");
            scanf("%d", &e);
            c = a - b;
            printf("Subtraction of two values = %d \n", c);
            switch(e)
            {
                case 1:
                    if (a > b)
                    {
                        c = a - b;
                        else 
                            c = b - a;
                    }
                    break;
                case 2:
                    c = a - b;
                    break;
                default :
                    printf("Invalid option");
            }
    }
}


#include <stdio.h>
void main()
{
    int a,b,c;
    int d, e;
    clrscr();
    printf("Enter the first value \n");
    scanf("%d", &a);
    printf("Enter the second value \n");
    scanf("%d", &b);
    printf("Type 1 to add \n");
    printf("Type 2 to subtract \n");
    printf("Type 3 to multiply \n");
    printf("Type 4 to division \n");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
            c = a + b;
            printf("Addition of two values = %d \n", c);
            break;

        case 2 :
            printf("How do you want to sub \n 1.Big number - small number \n");
            printf("2.First number - second number \n");
            scanf("%d", &e);
            c = a - b;
            printf("Subtraction of two values = %d \n", c);
            switch(e)
            {
                case 1:
                    if (a > b)
                    {
                        c = a - b;
                        else {
                            c = b - a;
                        }
                    }
                    break;
                case 2:
                    c = a - b;
                    break;
                case 3 :
                    c = a * b;
                    printf("Multiplication of two values = %d \n",c);
                    break;
                case 4 :
                    c = a/b;
                    printf("Division of two values = %d \n");
                    break;
                default :
                    printf("Invalid option");
            }
            getch();
    }
}