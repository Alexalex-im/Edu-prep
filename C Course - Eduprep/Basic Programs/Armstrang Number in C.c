#include <stdio.h>
int main()
{
    int check = 153;
    int result = 0;
    int digit;

    int copy = check;
    while (copy > 0) {
        digit = copy % 10;
        result = result + (digit * digit * digit);
        copy = copy / 10;
    }
    if (check == result)
        prinf("%d is an Armstrang Number \n", check);
    else 
        printf("%d is not an Armstrang number \n", check);
    return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
    int check = 371;
    float result = 0;
    int digit = 0, remainder;
    int copy = check;

    while (copy > 0) {
        digit++;
        copy = copy / 10;
    }
    printf("The number of digits in the input is %d \n", digit);
    copy = check;

    while (copy > 0) {
        remainder = copy % 10;
        result = result + pow(remainder, digit);
        copy = copy / 10;
    }
    if (check == (int) result)
        prinf("%d is an Armstrang Number \n", check);
    else 
        printf("%d is not an Armstrang number \n", check);
    return 0;
}
