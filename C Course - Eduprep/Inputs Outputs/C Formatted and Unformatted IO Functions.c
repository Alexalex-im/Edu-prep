#include <stdio.h>
// int main()
// {
//     char gender[15];
//     puts ("Hi! Welcome to programming Line \n Enter your gender : ");
//     gets(gender);
//     puts("The value you have typed is ");
//     puts(gender);
//     return 0;
// }

// int main() {
//     char gender;
//     puts ("Hi! Welcome to programming Line \n Enter your gender (M/F) : ");
//     gender = getchar();
//     puts("The value you have typed is ");
//     puts(gender);
//     return 0;
// }

// int main() {
//     char gender;
//     puts ("Hi! Welcome to programming Line \n Enter your gender (M/F) : ");
//     gender = getchar();
//     puts("The value you have typed is %c, gender");
//     return 0;
// }


// int main() {
//     char gender[15];
//     puts ("Hi! Welcome to programming Line \n Enter your gender (M/F) : ");
//     scanf("%s", &gender);
//     printf("The value you have typed is %s, gender");
//     return 0;
// }


int main() {
    char name[40];
    int age;
    float weight;
    char gender;
    printf("Hi! Welcome to programming Line \n Enter your name : ");
    scanf("%s", &name);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your weight : ");
    scanf("%f", &weight);
    printf("Enter your gender (M/F) : ");
    printf("\n Thanks for your providing your information \n");
    printf("Your name is %s \n Your Gender : %d \n Your Age : %d \n Your weight : %f" name, gender, age, weight);
    return 0;

}



int main () {
    char name[40];
    int age;
    float weight;
    char gender;
    printf("Hi! Welcome to programming Line \n Enter your gender (M/F) : ");
    scanf("%c", &gender);
    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your weight : ");
    scanf("%f", &weight);
    printf("\n Thanks for your providing your information \n");
    printf("Your name is %s \n Your Gender : %d \n Your Age : %d \n Your weight : %f" name, gender, age, weight);
    return 0;
}