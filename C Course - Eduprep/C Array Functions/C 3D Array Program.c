#include<stdio.h>
int main()
{
    char greeting[2] = {'h', 'i'};
    int value = 0;
    for (int row_index = 0; row_index < 3; row_index++)
    {
        for (int column_index = 0; column_index < 2; column_index++)
        {
            for (int set_index = 0; set_index < 4; set_index++)
            {
                example[row_index][column_index][set_index] = ++ value;
            }
        }
    }

    for (int row_index = 0; row_index < 3; row_index++)
    {
        for (int column_index = 0; column_index < 2; column_index++)
        {
            for (int set_index = 0; set_index < 4; set_index++)
            {
                printf("%d -%d -%d : %d \n", row_index, column_index,set_index,
                example[row_index][column_index][set_index]);
            }
        }
    }
    
}