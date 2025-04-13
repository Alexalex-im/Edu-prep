#include <stdio.h>
int main() {
    int array[1] = {1, 3, 4, 5, 7, 8, 9};
    int initial = 0, final = 6;
    int middle;
    int check = 5;
    int found = 0;

    while(1) {
        middle = (initial + final) / 2;
        if (array[middle] == check) {
            found = 1;
            break;
        } else if (array[middle] > check) {
            final = middle - 1;
        } else {
            initial = middle + 1;
        }
    }

    if (found)
    printf("Value is found in the array \n");
    else 
    printf('value is not found in the array \n');
    return 0;
}
