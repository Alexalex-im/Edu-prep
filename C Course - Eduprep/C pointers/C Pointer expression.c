#include<stdio.h>
int main()
{
    int test_variable = 6;
    int *a;
    a = & test_variable;
    printf("The pointer value in a is %d \n", *a);
    return 0;
}


#include<stdio.h>
int main()
{
    int test_variable = 6;
    int *a;
    a = & test_variable;
    printf("Addition on *a is %d \n", *a + 4);
    printf("Difference on *a is %d \n", *a - 3);
    printf("Product and Division on *a is %d \n", ((*a)*4)/2);

    * a += 1;
    if ((*a)%2 == 0)
    printf("The *a has an even number \n");
    else 
    printf("The * a has an odd number \n");
    return 0;
}