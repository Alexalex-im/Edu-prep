#include<stdio.h>
int main()
{
    char grade = 'A';
    switch (grade) {
        case 'A':
            printf("The student performance is excellent \n");
            break;
        case '0':
            printf("The student performance is Outstanding \n");
            break;
        case 'B':
            printf("The student performance is good \n");
            break;
        case 'C':
            printf("The student performance is Need to be improved \n");
            break;
        case 'F':
            printf("The student performance is poor \n");
            break;
    } default:
        printf("The grade is invalid \n");
        return 0; 
}