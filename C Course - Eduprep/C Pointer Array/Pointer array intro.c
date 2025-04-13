#include <stdio.h>
int main()
{
    int sample [4] = {1, 3, 4, 6};
    int * P_array;
    P_array = sample;
    printf("Address of sample [0] is %u \n", & sample[0]);
    printf("Value of P_array is %u \n", P_array);
    return 0;
}


#include <stdio.h>
int main()
{
    int sample [4] = {1, 3, 4, 6};
    int * P_array;
    P_array = sample;
    printf("Address of sample [0] is %u \n", & sample[0]);
    printf("Address of sample [1] is %u \n", & sample[0 + 2]);
    printf("Value of P_array is %u \n", P_array + 2);
    return 0;
}

#include <stdio.h>
int main()
{
    int sample [4] = {1, 3, 4, 6};
    int * P_array;
    P_array = sample;
    int iteration;
    for (iteration = 0; iteration < 4; iteration++)
    {
        printf("The value in index %d is %d", iteration, * (P_array + iteration));
    }
    return 0;
}