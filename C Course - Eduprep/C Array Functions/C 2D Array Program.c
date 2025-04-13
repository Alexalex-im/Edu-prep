#include<stdio.h>
int main()
{
    int student_marks [4][2] = {{77, 82}, {91, 66}, {55, 47}, {100, 32}};
    for (int student_index = 0; student_index < 4; student_index++)
    {
        printf("Details of student %d \n", student_index + 1);
        for (int mark_index = 0; mark_index < 2; mark_index++)
        {
            printf("Mark %d : %d \n", mark_index + 1, student_marks[student_index][mark_index]);
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int row = 3,column = 3;
    int A[row][column] = {{1, 5, 9}, {2, 4, 8}, {7, 9, 3}, B[row][column] = {{2,7,4}, {3,8,1}, {2,8,5}}}, C[row][column];
    for (row_index = 0; row_index < row; row_index++)
    {
        for (column_index = 0; column_index < column; column_index++)
        {
            c[row_index][column_index] = A [row_index][column_index] + B[row_index][column_index];
        }
    }
    for (row_index = 0; row_index < row; row_index++)
    {
        for (column_index = 0; column_index < column; column_index++){
            printf("%d \t", c[row_index][column_index]);
        }
        printf("\n");
    }
    return 0;
}