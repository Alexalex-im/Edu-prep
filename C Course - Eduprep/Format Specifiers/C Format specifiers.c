#include <stdio.h>
int main() {
    char alpha = 'A';
    int neutral_number = 0;
    printf("%c \n ", alpha);
    printf(" %d \n", neutral_number);
}

int main() {
    char alpha = 'A';
    int neutral_number = 0;
    printf("%d \n ", alpha);
    printf(" %d \n", neutral_number);
}


int main() {
    char alpha = 'A';
    int neutral_number = 66;
    printf("%d \n ", alpha);
    printf(" %c \n", neutral_number);
}

int main() {
    char alpha = 'A';
    int neutral_number = 66;
    float temperature = 31.7;
    printf("%d \n ", alpha);
    printf(" %c \n", neutral_number);
    printf("%d \n ", temperature);
    return 0;
}


int main() {
    char alpha = 'A';
    int neutral_number = 66;
    float temperature = 31.7;
    long double phone_number = 1234567890;
    printf("%d \n ", alpha);
    printf(" %c \n", neutral_number);
    printf("%f \n ", temperature);
    printf("%1f \n ", phone_number);
    return 0;
}


int main() {
    char alpha = 'A';
    int neutral_number = 66;
    long int aadhar_number = 23451234567890;
    printf("%1f \n ", aadhar_number);
    return 0;
}


int main() {
    char alpha = 'A';
    unsigned int neutral_number = 66;
    float temperature = 31.7;
    double phone_number = 1234567890;
    printf("%d \n ", alpha);
    printf(" %c \n", neutral_number);
    printf("%f \n ", temperature);
    printf("%1f \n ", phone_number);
    return 0;
}

#include <stdio.h>
int main() {
    printf("Size of data types \n");
    printf("Char - %d byte \n ", sizeof(char));
    printf("int - %d byte \n ", sizeof(int));
    printf("unsigned int - %d byte \n ", sizeof(unsigned int));
    printf("long int - %d byte \n ", sizeof(long int));
    printf("float - %d byte \n ", sizeof(float));
    printf("double - %d byte \n ", sizeof(double));
    printf("long double - %d byte \n ", sizeof(long double));
    return 0

}