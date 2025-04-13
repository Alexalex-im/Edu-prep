#include <stdio.h>
void main()
{
    char grade = 'B';
    switch (grade) {
        clrscr();

        case 'A':
            printf("Excellent ! \n");
            break;
        case 'B':
            printf("Very good \n");
            break;
        case 'C':
            printf("well done \n");
            break;
        case 'D':
            printf("You passed \n");
            break;
        case 'E':
            printf("Better luck Try again \n");
            break;
        default:
            printf("Invalid grade \n");
    }
    printf("your grade is %c \n", grade);
    getch();
}


// Nested switch

#include <stdio.h>
void main()
{
    int a = 100;
    int b = 200;
    clrscr();
    switch(a) {
        case 100:
        printf("This is part of outer switch \n", a);
        switch (b) {
            case 200:
            printf("This is part of inner switch \n", a);
        }
    }
    printf("Exact value of a is : %d \n", a);
    printf("Exact value of b is : %d \n", b);

}