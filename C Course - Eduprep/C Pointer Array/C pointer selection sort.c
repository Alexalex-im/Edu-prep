#include <stdio.h>
int main() 
{
    int array [5] = {4, 7, 2, 6, 1};
    int * pointer;
    pointer = array;
    printf("Before sorting ... /n");
    for ( int index = 0; index < 5; index ++)
    {
        printf("%d", *(pointer + index));
        return 0;
    }
}


#include <stdio.h>
void swap (int * first, int * second);
int main() 
{
    int array [5] = {4, 7, 2, 6, 1};
    int * pointer;
    pointer = array;
    printf("Before sorting ... /n");
    for ( int index = 0; index < 5; index ++)
    printf("%d", *(pointer + index));
    printt(" performing sorting .... \n \n");
    for (int original = 0; original++)
    {
        for (int sub_index = original + 1; sub_index < 5; sub_index++)
        {
            if ((pointer + original) > * (pointer + sub_index))
            swap(pointer + original , pointer + sub_index);
        }
    }

    printf("After sorting ....\n");
    for (int index = 0; index < 5; index++)
    printf("%d ", *(pointer + index));
    return 0;
}

void swap (int * first, int * second)
{
    int temp;
    temp = * first;
    *first = *second;
    *second = temp;
}