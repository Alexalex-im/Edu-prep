#include <stdio.h>
int main() {
    int iteration;
    printf("Start of the loop \n");
    for (iteration = 1; iteration <= 3; iteration ++)
    {
        printf("Started for %d \n", iteration);
        if (iteration == 2) {
            break;
        }
        printf("Complete for %d \n", iteration);
    }
    printf("End of the loop \n");
    return 0;
}


#include <stdio.h>
int main()
{
    int iteration;
    int parent;
    printf("Start of the loop \n");
    for (parent = 1; parent <= 2; parent++) {
        for (iteration = 1; iteration <= 3; iteration++) {
            printf("started for %d \n", iteration);
            if (iteration == 2) {
                continue;
            }
            printf("Completed for %d \n", iteration);
        }
    }
    printf("End of the loop \n");
    return 0;
}

#include<stdio.h>
int main()
{
    int something = 0;
    do {
        Repeat:
            printf("Inside repeat \n");
            something++;
    } while (something == 1) {
        printf("%d \n", something);
        printf("Again repeating \n");
        printf("Again repeating \n");
        goto Repeat;
        return 0;
    }
    printf("%d \n", something);
    return 0;
    
}