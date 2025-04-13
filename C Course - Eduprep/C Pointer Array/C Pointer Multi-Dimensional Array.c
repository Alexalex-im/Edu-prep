#include<stdio.h>
int main()
{
    int original [2][4] = {{4, 1, 8, 3}, {7, 9, 6, 2}};
    printf("values in the original array .... \n");
    for (int set_index = 0; set_index < 2; set_index++)
    {
        for (int inner_index = 0; inner_index < 4; inner_index++)
        {
            printf("%d", original [set_index] [inner_index]);
        }
        printf("\n");
    }
    return 0; 
}



#include<stdio.h>
int main()
{
    int original [2][4] = {{4, 1, 8, 3}, {7, 9, 6, 2}};
    int ("pointer")[4] = original;
    printf("Printing the pointer array .... \n");
    for (int set_index = 0; set_index < 2; set_index++)
    {
        for (int inner_index = 0; inner_index < 4; inner_index++)
        {
            printf("%d \n", * (*(pointer + set_index) + inner_index));
        }
        printf("\n");
    }
    return 0; 
}
