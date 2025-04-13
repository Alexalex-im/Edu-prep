#include<stdio.h>
int main()
{
    int number = 3;
    int sum = 0;
    int iteration;
    for (iteration = 1; iteration <= number; iteration++) {
        sum += iteration;
    }
    printf ("The sum of %d is %d \n", number, sum);
    return 0;
}


// #include<stdio.h>
// int sum (int value);
// int main()
// {
//     int number = 3;
//     printf ("The sum of %d is %d \n", number, sum(number));
//     return 0;
// }

// int sum (int value) {
//     if (value > 0)
//     return value + sum (value - 1);
//     else if (value == 1)
//     return 1;
//     else 
//     return 0;
// }



// #include<stdio.h>
// int factorial (int value);
// int main()
// {
//     int number = 0;
//     printf ("The of %d is %d \n", number, factorial(number));
//     return 0;
// }

// int factorial (int value) {
//     if (value > 1)
//     return value * factorial (value - 1);
//     else if (value == 1 || value == 0)
//     return 1;
//     else 
//     return 0;
// }