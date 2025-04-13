#include<stdio.h>
int main(){
    int month = 12;
    printf("%d \n", month);
    return 0;
}


#include <stdio.h>
void example();
int main() {
    typedef int NUMBER;
    NUMBER month = 12;
    printf("%d \n", month);
    return 0;
}
void example() {
    NUMBER age = 12;
}


#include <stdio.h>
typedef int NUMBER;
void example();
NUMBER main() {
    NUMBER month = 12;
    printf("%d \n", month);
    return 0;
}
void example() {
    NUMBER age = 12;
}


#include <stdio.h>
typedef int NUMBER;
typedef int TIME;
struct class
{
    TIME start_time;
    TIME end_time;
};

struct class class_Object;
void example();
NUMBER main() {
    NUMBER month = 12;
    printf("%d \n", month);
    return 0;
}
void example() {
    NUMBER age = 12;
}



#include <stdio.h>
typedef int NUMBER;
typedef int TIME;
typedef struct sess
{
    TIME start_time;
    TIME end_time;
} SESS;

SESS class_object;
void example();
NUMBER main() {
    class_object.start_time = 8;
    class_object.end_time = 17;
    printf("%d \n", class_object.end_time);
    return 0;
}
void example() {
    NUMBER age = 12;
}