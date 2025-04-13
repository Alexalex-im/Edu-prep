#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[40];
        int age;
        int tamil;
        int english;
        int science;
        float average;
    };
    struct student abdul;
    strcpy (abdul.name, "Abdul");
    abdul.age = 12;
    printf("Age of %s is %d \n", abdul.name, abdul.age);
    abdul.tamil = 80;
    abdul.english = 85;
    abdul.science = 82;
    abdul.average = (abdul.tamil + abdul.english + abdul.science) / 3;
    printf("Details of %s \n Age : %d \n Marks : tamil = %d; English  = %d; Science = %d \n, Average of marks : %d", abdul.name, abdul.age, abdul.tamil, abdul.english, abdul.science, abdul.average);
    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[40];
        int age;
        struct subjects tenth;
    };

    struct subjects{
        int tamil;
        int english;
        int science;
        int social;
        int math;
        float average;
    };

    struct student abdul;
    strcpy (abdul.name, "Abdul");
    abdul.age = 15;
    abdul.tenth.tamil = 60;
    abdul.tenth.english = 70;
    abdul.tenth.maths = 70;
    abdul.tenth.science = 70;
    abdul.tenth.social = 70;
    abdul.tenth.average = (abdul.tenth.tamil + abdul.tenth.english + abdul.tenth.math + abdul.tenth.science + abdul.tenth.social) / 5;
    printf("Details of %s \n Age : %d \n Marks : tamil = %d; English  = %d; Maths = %d; Science = %d; Social = %d \n, Average of marks : %d", abdul.name, abdul.age, abdul.tenth.tamil, abdul.tenth.english, abdul.tenth.maths, abdul.tenth.science, abdul.tenth.social, abdul.tenth.average);
    return 0;
}



#include<stdio.h>
#include<string.h>
void display(struct student one_student);
int main()
{
    struct subjects{
        int tamil;
        int english;
        int science;
        int social;
        int math;
        float average;
    };

    struct student abdul;
    strcpy (abdul.name, "Abdul");
    abdul.age = 15;
    abdul.tenth.tamil = 60;
    abdul.tenth.english = 70;
    abdul.tenth.maths = 70;
    abdul.tenth.science = 70;
    abdul.tenth.social = 70;
    abdul.tenth.average = (abdul.tenth.tamil + abdul.tenth.english + abdul.tenth.math + abdul.tenth.science + abdul.tenth.social) / 5;
    disply(abdul);
    return 0;
};
struct student
{
    char name[40];
    int age;
    struct subject tenth;
};

void display (struct student one_student) {
    printf("Display() \n Details of %s \n Age : %d \n Marks : tamil = %d; English  = %d; Maths = %d; Science = %d; Social = %d \n, Average of marks : %d", abdul.name, abdul.age, abdul.tenth.tamil, abdul.tenth.english, abdul.tenth.maths, abdul.tenth.science, abdul.tenth.social, abdul.tenth.average);
    return 0;

}




#include<stdio.h>
#include<string.h>
struct subjects {
    float average;
};
student student 
{
    char name[40];
    int age;
}; struct student tenth;
int main()
{
    
    struct student student[2];
    strcpy (student[0].name, "Abdul");
    student[0].age = 15;
    student[0].tenth.tamil = 60;
    student[0].tenth.english = 70;
    student[0].tenth.maths = 70;
    student[0].tenth.science = 70;
    student[0].tenth.social = 70;
    student[0].tenth.average = (student[0].tenth.tamil + student[0].tenth.english + student[0].tenth.math + student[0].tenth.science + student[0].tenth.social) / 5;

    strcpy(student[0].name, "Bharat");
    student[1].age = 15;
    student[1].tenth.tamil = 60;
    student[1].tenth.english = 70;
    student[1].tenth.maths = 70;
    student[1].tenth.science = 70;
    student[1].tenth.social = 70;
    student[1].tenth.average = (student[1].tenth.tamil + student[1].tenth.english + student[1].tenth.math + student[1].tenth.science + student[1].tenth.social) / 5;

    printf("Display() \n Details of %s \n Age : %d \n Marks : tamil = %d; English  = %d; Maths = %d; Science = %d; Social = %d \n, Average of marks : %d", student[index].name, student[index].age, student[index].tenth.tamil,one_student[index].tenth.english, student[index].tenth.maths, student[index].tenth.science, student[index].tenth.social, student[index].tenth.average);
    return 0;

}