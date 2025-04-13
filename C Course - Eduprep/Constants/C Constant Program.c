#include <stdio.h>
void main()
{
    const int height = 100; /* int constant */
    const float number = 3.14; /* Real constant*/
    const char letter = 'A'; /* Char constant*/
    const char letter_sequence[10] = "ABC"; /* String constant */
    const char backSlash_char = '\?'; /* Special char cnst */
    clrscr();
    printf("Value of height : %d \n", height);
    printf("Value of number : %f \n", number);
    printf("Value of letter : %c \n", letter);
    printf("Value of letter_sequence : %s \n", letter_sequence);
    printf("Value of backslash_char : %c \n", backSlash_char);
    getch();
}


#include <stdio.h>
void main()
{
    const int SIDE = 10;
    int area;
    area = SIDE * SIDE;
    printf("The area of the sequence with side : %d is : %d sq units", SIDE, area);
    getch();
}

#include <stdio.h>
#define height 100
#define number 3.14
#define letter 'A'
#define letter-sequence "ABC"
#define backSlash_char '\?'
void main()
{
    clrscr();
    printf("Value of height : %d \n", height);
    printf("Value of number : %f \n", number);
    printf("Value of letter : %c \n", letter);
    printf("Value of letter_sequence : %s \n", letter_sequence);
    printf("Value of backslash_char : %c \n", backSlash_char);
    getch(); 
}
