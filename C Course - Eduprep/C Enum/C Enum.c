#include<stdio.h>
int main()
{
    int mark = 98;
    char a_grade = 'A', b_grade = 'B';
    if (mark >= 81 && mark <= 100)
    printf("%c \n", a_grade);
    else if (mark >= 51 && mark <= 80)
    printf("%c \n", b_grade);
    return 0;
}


#include<stdio.h>
int main()
{
    int mark = 90;
    enum grades {
        excellent = 's',
        a_grade = 'A',
        b_grade,
        c_grade
    };
    if (mark >= 81 && mark <= 100)
    printf("%c \n", a_grade);
    else if (mark >= 71 && mark <= 80)
    printf("%c \n", b_grade);
    else if (mark >= 51 && mark <= 70)
    printf("%c \n", c_grade);
    return 0;
}


#include<stdio.h>
int main()
{
    int mark = 92;
    enum grades {
        excellent = 's',
        a_grade,
        b_grade,
        c_grade
    };
    if (mark >= 91 && mark <= 100)
    printf("%c \n", excellent);
    else if (mark >= 81 && mark <= 90)
    printf("%c \n", a_grade);
    else if (mark >= 71 && mark <= 80)
    printf("%c \n", b_grade);
    else if (mark >= 51 && mark <= 70)
    printf("%c \n", c_grade);
    return 0;
}