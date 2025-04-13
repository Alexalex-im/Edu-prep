#include <stdio.h>
int main()
{
    int major_age = 18;
    printf("The major_age variable value is %d \n", major_age);
    printf("The majot_age variable address is %d \n", &major_age);
    return 0;
}

#include <stdio.h>
int main()
{
    int major_age = 18;
    int * Voting_age;
    // Value print
    printf("The major_age variable value is %d \n", major_age);
    printf("The Voting_age variable value is %d \n", Voting_age);
    // Address print
    printf("The majot_age variable address is %u \n", &major_age);
    printf("The Voting_age variable address is %u \n", Voting_age);
    return 0;
}

#include <stdio.h>
int main()
{
    int major_age = 18;
    int * Voting_age;
    int age = &major_age;
    // Value print
    printf("The major_age variable value is %d \n", major_age);
    printf("The Voting_age variable value is %d \n", * Voting_age);
    // Address print
    printf("The majot_age variable address is %u \n", &major_age);
    printf("The Voting_age variable address is %u \n", Voting_age);
    printf("The Voting_age variable address is %u \n", &Voting_age);
    return 0;
}


#include <stdio.h>
int main()
{
    int major_age = 18;
    int * Voting_age;
    int ** driving_age;

    Voting_age = & major_age;
    driving_age = & Voting_age;
    driving_age = 0;
    // Value print
    printf("The major_age variable value is %u \n", * driving_age);
    printf("The Voting_age variable value is %u \n", * driving_age);
    // Address print
    printf("The driving_age variable address is %u \n", & driving_age);
    printf("The driving_age variable address is %u \n", driving_age);
    return 0;
}