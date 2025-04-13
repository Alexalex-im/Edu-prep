#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "an apple a day, Keeps the doctor away";
    int length;
    length = strlen(example);
    printf("The length of string in example is %d \n", length);
    return 0;
}



#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "an apple a day, Keeps the doctor away";
    char copy[40];
    copy = example;
    strcpy(copy, example);
    printf("source : %s \n", example);
    printf("Destination : %s \n", copy);
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char prefix[] = "An apple a day";
    char suffix[] = "Keeps the doctor away";
    strcat(prefix, suffix);
    printf("The answer : %s \n", prefix);
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char first[] = "apple";
    char second[] = "Apple";
    printf("The answer : %d \n", strcmp(first, second));
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An apple a day, keeps the doctor away";
    printf("%s \n", strrev(example));
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "madam";
    char copy [strlen(example) + 1];
    strcpy (copy, example);
    strrev(copy);
    printf("%s \n", example, copy);
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "madam";
    char copy [strlen(example) + 1];
    strcpy (copy, example);
    strrev(copy);
    if (strcmp[example, copy] == 0);
    printf("%s is a palindrome \n", example);
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An Apple a day, keeps the doctor away";
    char pivot = 'd';
    printf("After using strchr() : %s \n", strchr(example, pivot));
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An Apple a day, keeps the doctor away";
    char second[] = "Thank you";
    strncat(example, second, 7);
    printf("After using strncat(); %s \n", example);
    return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An Apple a day, keeps the doctor away";
    printf("After using strnlwr(); %s \n", strlwr(example));
    return 0;
}



#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An Apple a day, keeps the doctor away";
    printf("After using strlwr(); %s \n", strupr(example));
    return 0;
}



#include<stdio.h>
#include <string.h>
int main()
{
    char example[] = "An Apple a day, keeps the doctor away";
    char sub_string[] = "day";
    printf("After using strlwr(); %s \n", strstr(example, sub_string));
    return 0;
}