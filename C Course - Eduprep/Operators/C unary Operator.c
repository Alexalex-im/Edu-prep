#include <stdio.h>
int main()
{
    int value = 6;
    printf("%d \n" , ++value);
    return 0;
}


#include <stdio.h>
int main()
{
    int value = 6;
    value ++;
    printf("%d \n", value++);
    printf("Now after increment %d \n", value);
    return 0;
}