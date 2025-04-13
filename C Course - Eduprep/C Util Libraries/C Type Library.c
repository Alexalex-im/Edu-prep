#include <stdio.h>
#include<ctype.h>
int main() {
    char example[] = " I am very happy";
    int index;
    int count = 0;
    for (index = 0; index < 19; index ++)
    {
        if (isalpha(example[index]) != 0)
        count++;
    }
    printf("The number of alphabet in the given string is %d \n", count);
    return 0;
}



#include <stdio.h>
#include<ctype.h>
int main() {
    char example[] = " I aAm Ivegry; hap8py";
    int index;
    int count = 0;
    for (index = 0; index < 22; index ++)
    {
        if (isalnum(example[index]) != 0)
        count++;
    }
    printf("The number of alphabet in the given string is %d \n", count);
    return 0;
}



#include <stdio.h>
#include<string.h>
int main() {
    char example[] = " I aAm@Ivegry; hap8py";
    int index;
    int count = 0;
    for (index = 0; index < strlen(example); index ++)
    {
        if (isalnum(example[index]) != 0)
        count++;
    }
    printf("The number of alphabet in the given string is %d \n", count);
    return 0;
}


#include <stdio.h>
#include<string.h>
int main() {
    char example[] = "AT58GN";
    int index;
    int count = 0;
    for (index = 0; index < strlen(example); index ++)
    {
        if (isxdigit(example[index]) != 0)
        count++;
    }
    printf("The number of alphabet in the given string is %d \n", count);
    return 0;
}


#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    char example[] = " AT589n92";
    int index;
    int sum = 0;
    for (index = 0; index < strlen(example); index ++)
    {
        sum += toascii(example[index]);
    }
    printf("The number of alphabet in the given string is %d \n", sum);
    return 0;
}


#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    printf("%c \n", toupper('A'));
    return 0;
}


#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    printf("%d \n", islower('F'));
    return 0;
}
