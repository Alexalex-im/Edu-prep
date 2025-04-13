#include<stdio.h>
void call_check (int *test);
int main()
{
    int main_variable = 4;
    printf("The value of main_variable  is %d \n", main_variable);
    call_check (main_variable);
        printf("The value of main variable after call_check() is %d \n", main_variable);
    void call_check(int method_variable) 
    {
        * method_variable += 6;
        printf("The value of method_variable is  %d \n", *method_variable);
    }
}


#include<stdio.h>
void call_check (int *test);
int main()
{
    int main_variable = 4;
    printf("The value of main_variable  is %d \n", main_variable);
    call_check (&main_variable);
    printf("The value of main variable after call_check() is %d \n", main_variable);
    return 0;
}
    void call_check(int * method_variable) 
    {
        * method_variable += 6;
        printf("The value of method_variable is  %d \n", *method_variable);
    }
}



