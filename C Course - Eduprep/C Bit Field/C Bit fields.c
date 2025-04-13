#include<stdio.h>
int main()
{
    int result = 0;
    return 0;
}


#include<stdio.h>
struct customer
{
    int premium : 1;
    int grades : 2;
} andrew;

int main()
{
    enum Result {
        PASS = 1,
        FAIL = 0
    };

    enum grades {
        A = 1,
        B = 2,
        C = 3
    };
    andrew.premium = PASS;
    andrew.grades = B;
    Printf("Premium : %d \n Grade %d \n", andrew.premium, andrew.grades);
    return 0;
}