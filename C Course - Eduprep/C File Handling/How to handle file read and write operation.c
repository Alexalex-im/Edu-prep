#include <stdio.h>
int main()
{
    FILE * pointer;
    pointer = fopen ("example.txt", "a");
    return 0;
}



#include <stdio.h>
int main()
{
    FILE * pointer;
    pointer = fopen ("example.txt", "r");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else 
    printf(" File is not yet executed \n");
    fclose(pointer);
    return 0;

}


#include <stdio.h>
int main()
{
    FILE * pointer;
    pointer = fopen ("example.txt", "a");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else 
    printf(" File is not yet executed \n");
    fclose(pointer);
    return 0;

}


#include <stdio.h>
int main()
{
    FILE * pointer;
    pointer = fopen ("example.txt", "w");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else {
    printf(" File is not yet executed \n");
    fprintf(pointer , "%s \n");
    }
    fclose(pointer);
    return 0;

}


#include <stdio.h>
int main()
{
    FILE * pointer;
    char value[50];
    pointer = fopen ("example.txt", "r");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else {
    printf(" File is available \n");
    fscanf(pointer, "%s", value);
    printf("%s \n", value);
    }
    fclose(pointer);
    return 0;

}



#include <stdio.h>
int main()
{
    FILE * pointer;
    char value[50];
    pointer = fopen ("example.txt", "r");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else {
    printf(" File is available \n");
    while (fscanf (pointer, "%s", value) != EOF)
    printf("%s", value);
    printf("\n");
    }
    fclose(pointer);
    return 0;

}


#include <stdio.h>
int main()
{
    FILE * pointer;
    char value[50];
    pointer = fopen ("example.txt", "a");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else {
    printf(" File is available \n");
    fputs("This text if from puts()", pointer);
    }
    fclose(pointer);
    return 0;

}



#include <stdio.h>
int main()
{
    FILE * pointer;
    char value[25];
    pointer = fopen ("example.txt", "r");
    if (pointer == NULL)
    printf(" Files is not yet executed \n");
    else {
    printf(" File is available \n");
    fgets (value, 100, pointer);
    printf("%s \n", value);
    }
    fclose(pointer);
    return 0;

}



#include <stdio.h>
int main()
{
    FILE * read, *write;
    char value[255];
    read = fopen("example.txt", "r");
    write = fopen ("example.txt", "w");
    if (read == NULL)
    printf(" Files is not yet created \n");
    else {
    printf(" File is available \n");
    fprintf(write, "welcome to this programming class.");
    fclose(write);
    fgets (value, 100, read);
    printf("%s \n", value);
    }
    fclose(read);
    return 0;

}