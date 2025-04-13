#include <stdio.h>
int main()
{
    int A=1, B=1;
    printf("%d && %d = %d \n" , A, B, A && B);
    printf("%d && %d = %d \n", A, B, (7 < 5) && (3 > 9));
    printf("AND Answer : %d \n ", A, B, (7 < 5) && (3 > 1));
    printf("Answer : %d \n ", A, B, (7 < 25) && (3 > 17));
    return 0;
}


#include <stdio.h>
int main()
{
    int A=1, B=1;
    printf("OR Answer : %d \n ", A, B, (7 <= 7) && (3 > 6));
    printf("NOT Answer : %d \n ", !0);
    return 0;
}
