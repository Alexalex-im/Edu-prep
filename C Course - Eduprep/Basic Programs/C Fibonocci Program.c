#include <stdio.h>
int main()
{
    int limit = 10;
    int first = 0, second = 1;
    int mind;
    for (int iteration = 1; iteration <= limit; iteration++)
    {
        printf("%d \n", first);
        mind = first + second;
        first = second;
        second = mind;
    }
    return 0;
}