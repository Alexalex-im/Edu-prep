#include <stdio.h>
int main()
{
    int numerator = 4;
    int denominator = 0;
    if (denominator == 0)
    {
        printf("The number is zero \n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int numerator = 4;
    int denominator = 1.0;
    if (denominator == 1.0)
    {
        printf("The denominator value is 1.0 \n");
    }
    printf("End of If \n");
    return 0;
}


#include <stdio.h>
int main()
{
    int dividend = 4;
    int divisor = 2;
    if (divisor != 1.0)
    {
        float quotient = dividend / divisor;
        printf("The quotient value is 1.0 \n", quotient);
    } else {
        printf("Division cannot be done ! diviser sould not equals '0' \n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int check_value = -2;
    if (check_value == 0)
        printf("The check value is zero \n");
    else 
        printf("It is a positive number \n");
    return 0;
}


#include <stdio.h>
int main()
{
    int check_value = -2;
    if (check_value == 0)
    printf("The check value is zero \n");
    else if (check_value > 0)
    printf("It is a positive number \n");
    else 
    printf("It is a negative number \n");
    return 0;
}


#include <stdio.h>
int main()
{
    int check_value = 0;
    if (check_value)
    printf("If block executed \n");
    else 
    printf("Else block executed");
    return 0;
}


#include <stdio.h>
int main()
{
    if (check_value)
    {
        if (check_value > 0)
        printf("Check_value is positive \n");
        else if (check_value < 0)
        printf("check_value is negative \n");
    } else 
    printf("check Value is zero \n");
    return 0;
}


#include <stdio.h>
int main()
{
    int number_to_check = 3;
    if ( number_to_check % 2 == 0)
    printf("%d is an ever number \n", number_to_check);
    else 
    printf("%d is an odd number \n", number_to_check);
    return 0;
}


#include <stdio.h>
int main()
{
    int number_to_check = 3;
    if (number_to_check % 2)
    printf("%d is an odd number \n", number_to_check);
    else
    printf("%d is an even number \n", number_to_check);
    return 0;
}