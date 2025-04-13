#include <stdio.h>
int main()
{
    int age = 18;
    printf("%s \n", age >= 18 ? "Major age" : "Minor age ");
    return 0;
   
}


#include <stdio.h>
int main()
{
    char grade = 'A';
    printf("Result : %s \n", grade == 'A' ? "Excellant" : (grade == 'B' ? "Average") : (grade == 'C' ? "poor" : "It should be one of A/B/C"));
    return 0;
}


#include <stdio.h>
int main()
{
    char grade = 'c';
    printf("Mark : %d \n", (grade == 'A' || grade == 'a') ? 90 : ((grade == 'B' || grade == 'b') ? 80 : ((grade == 'c' || grade == 'c') ? 70 : 0)));
    printf("The mark allocated is %d \n", marks);
    return 0;
}


#include <stdio.h>
int main()
{
    char grade = 'a';
    int standard = 6;
    int marks = (grade == 'A' || grade == 'a') && (standard ++ == 6) ? 90 : ((grade == 'B' || grade == 'b') ? 80 : ((grade == 'c' || grade == 'c') ? 70 : 0));
    printf(" The mark allocated is %d \n", marks);
    printf("The value in standard is %d \n", standard);
    return 0;
}


