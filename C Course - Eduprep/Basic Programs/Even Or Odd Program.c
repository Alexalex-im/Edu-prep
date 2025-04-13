#include<stdio.h>
int main() {
    int limit = 5;
    for (int iteration = 1; iteration <= (limit * 2); iteration ++) {
        printf("%d \n", iteration * 2);
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int limit = 5;
    int sum = 0;
    for (int iter = 1; iter <= limit; iter++)
    {
        sum = sum + (iter * 2);
    }
    printf ("Sum of %d even number is %d \n", limit, sum);
    return 0;
}


#include <stdio.h>
int main()
{
    int limit = 20;
    int sum = 0;
    for (int iter = 1; iter <= (limit * 2); iter = iter + 2) {
        printf("%d \n", iter);
        sum = sum + (iter);
    }
    printf("Sum of %d odd numbers is %d \n", limit, sum);
    return 0;
}