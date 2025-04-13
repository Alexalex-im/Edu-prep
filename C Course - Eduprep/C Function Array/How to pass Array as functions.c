# include <stdio.h>
int main()
{
    int main_array[5] = {2, 4, 6, 8, 10};
    for (int index = 0; index < 5; index ++) {
        printf("%d \n", main_array [index]);
        return 0;
    }
}


#include <stdio.h>
void print_array (int function_array[]);
int main()
{
    int main_array[] = { 2, 4, 6, 8, 10};
    for (int index = 0; index < 5; index++)
    printf("%d \n", main_array[index]);
    print_array (main_array);
    return 0;
}

void printarray(int function_array[])
{
    for (int index = 0; index < 5; index++)
    printf("%d \n", function_array[index]);
}



#include <stdio.h>
void print_array (int function_array[], int length);
int main()
{
    int length = 6;
    int main_array[length] = { 2, 4, 6, 8, 10};
    print_array (main_array, length);
    return 0;
}

void print_array(int function_array[], int length)
{
    for (int index = 0; index < length; index++)
    printf("%d \n", function_array[index]);
}