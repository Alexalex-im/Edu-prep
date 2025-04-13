#include <stdio.h>
int main()
{
    int array[] = {4, 7, 3, 1, 9, 2, 12, 10, 15};
    int point = 2;
    int index = 0;
    int found = 0;

    for (; index < 9; index++)
    {
        if (array[index] == point)
        found = 1;
    }
    if (found)
    printf("Found value %d \n", point);
    else 
    printf("Not found the value \n", point);
    return 0;
}



#include <stdio.h>
int main()
{
    int array[] = {4, 7, 3, 1, 9, 2, 12, 10, 5};
    int point = 4;
    int found = 0;

    for (int index = 0; index < 9 && (!found); index++)
    {
        if (array[index] == point)
        found = 1;
        break;
    }
    if (found)
    printf("Found the value %d \n", point);
    else 
    printf("Not found the value \n", point);
    return 0;
}


