#include <stdio.h>
int main()
{
    int start = 2;
    printf("%d \n", start);
    start = start + 2;
    printf("%d \n", start + 2);
    printf("%d \n", start + 2);
    start = start + 2;
    printf("%d \n", start + 2);
    start = start + 2;
    printf("%d \n", start + 2);
    start = start + 2;
    printf("%d \n ", start);
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    for (int start = 2; start <= 10; start = start + 2)
    {
        printf("%d \n" , start);
    }
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int start = 2;
    while (start <= 10) {
        printf("%d \n", start);
        start = start + 2;
    }
    printf("Loop Ended \n");
    return 0;
}



#include<stdio.h>
int main()
{
    printf("Loop started \n");
    int start = 2;
    do {
        printf("%d \n", start);
        start = start + 2;
    } while (start <= 10);
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int value = 1;
    for (; value != 1;) {
        printf("I am inside the block value =%d \n", value);
    }
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int value = 1;
    while (value != 1) {
        printf("I am inside the block. value %d \n", value);
    }
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int value = 1;
    do {
        printf("I am inside the block value =%d \n", value);
    } while (value != 1);
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int condition = 1;
    for (; condition;)
    {
        printf(" I got executed ! \n");
        condition = 0;
    }
    printf("Loop Ended \n");
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Loop started \n");
    int start = 1;
    for (; start <= 10;)
    {
        printf(" start =%d \n", start);
        start = start * 2;
    }
    printf("Loop Ended \n");
    return 0;
}


#include<stdio.h>
int main()
{
    printf("Loop started \n");
    int table_count = 1;
    int multiply_count;
    for (; table_count <= 5; table_count++) {
        multiply_count = 1;
        printf("%d table_count <= 0 \n");
        while (multiply_count <= 10) {
            printf("%d * %d = %d \n", table_count, multiply_count, table_count * multiply_count);
            multiply_count ++;
        }
        printf("\n");
    }
    printf("Loop Ended \n");
    return 0;
}