#include <stdio.h>
int main() {
    printf(" '<' => %d \n ", 2 < 1);
    printf(" '>' => %d \n ", 8 < 8);
    printf(" '<=' => %d \n ", 2 <= 2);
    printf(" '>=' => %d \n ", 8 >= 8);
    printf(" '==' => %d \n ", 2 == 5);
    printf(" '!=' => %d \n ", 2 != 5);
    return 0;
}

#include <stdio.h>
int main()
{
    int temp = 2;
    printf(" '<'  => %d \n ", temp < (2 + 3));
    printf(" '>' => %d \n", 8 > 8);
    printf(" '<' => %d \n", temp <= 2);
    return 0;
}