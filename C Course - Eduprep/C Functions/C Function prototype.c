#include <stdio.h>

void example_method();
int main() {
    int first_number = 7, second_number = 3;
    example_method (first_number);
    return 0;
}


#include <stdio.h>
void example_method(int first, int second);
int main() {
    int first_number = 7, second_number = 3;
    example_method (first_number, second_number);
    return 0;
}
void example_method (int first, int second) {
    printf("The %d + %d : %d \n", first, second, first + second);
}


#include <stdio.h>
void example_method(int first, int second);
int main() {
    int first_number = 7, second_number = 3;
    printf("main() : %d + %d = %d \n", first_number, second_number, example_method(first_number, second_number));
    return 0;
}
int example_method (int first, int second) {
    int sum;
    sum = first + second;
    return sum;
}


#include <stdio.h>
int example_method();
int main()
{
    int returned_value = example_method();
    printf("example_method() returned %d \n", example_method());
    return 0;
}
int example_method () {
    int first_number = 7, second_number = 3;
    return first_number + second_number;
}