#include <stdio.h>
int main()
{
    char gender = 'M';
    char gender_as_string[] = {'M', 'a', '!', 'e', '10'};
    printf("hello world");
    return 0;
}


#include <stdio.h>
int main()
{
    char name[] = {'n', 'a', 'm', 'e', '\0'};
    printf("The given name is %s \n", name);
    return 0;
}


#include <stdio.h>
int main()
{
    char name[] = {'n', 'a', 'm', 'e', '\0'};
    int index = 0;
    int cout = 0;
    while (name[index] != '\0')
    {
        count++;
        index++;
    }
    printf("The length of the sting in name is %d \n", count);
    return 0;
}


#include <stdio.h>
int main()
{
    char name[] = {'n', 'a', 'm', 'e', '\0'};
    int cout = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    printf("The length of the sting in name is %d \n", count);
    return 0;
}


#include <stdio.h>
int main()
{
    char name[] = "Computer";
    int cout = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    printf("The length of the sting in name is %d \n", count);
    return 0;
}


#include <stdio.h>
int main()
{
    const char * name = "computer";
    printf("Value in 'name' is %c \n", *name);
    return 0;
}


#include <stdio.h>
int main()
{
    const char * name = "computer";
    printf("Value in 'name' is %c \n", *(name + 1));
    return 0;
}

#include <stdio.h>
int main()
{
    const char * name = "computer";
    for (int index = 0; index < 5; index++)
    {
        printf("%c", * (name + index));
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    const char * name = "computer";
    for (int index = 0; index < 9; index++)
    {
        printf("%c", * (name + index));
        if (* (name + index) == '10')
        printf("\n null pointer has been foundex at index %d \n", index);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
int main()
{
    const char * name = "co/mp40ctber";
    printf("A : %d ; z : %d; a : %d; z : %d; $ : %d; |n", 'A','Z','a','z','1');
    return 0;
}

#include <stdio.h>
int main()
{
    const char * name = "cDo1mp4uct6eAr";
    int index = 0;
    int count = 0;

    while (*(name + index) != '\0') 
    {
        if (* (name + index) >= 'a' && *(name + index) <= 'z');
        count++;
        index += 1;
    }
    printf("There are %d smallcase letters in %s \n", count, name);
    return 0;
}
