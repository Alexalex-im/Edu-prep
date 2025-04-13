#include<stdio.h>
int add (int first, int second);
int sub (int first, int second);
int mul (int first, int second);
float div (int first, int second);
float mod (int first, int second);

int add (int first, int second) { return first + second; 
}
int sub (int first, int second) { return first - second; 
}
int mul (int first, int second) { return first * second; 
}

float div (int first, int second) {
    if (second)
        return first / second;
    else 
    return 0;
}; 

float mod (int first, int second)
{
    if (second)
        return first % second;
    else 
        return 0;

}
