#include<stdio.h>
/*
    1.auto 
    2.Register 
    3.static 
    4.extern
*/
int main()
{
    auto int number = 7;
    printf("%d \n", number);
    {
        int number = 13;
        printf("%d \n", number);
    }
    printf("%d \n", number);
    return 0;
}

#include<stdio.h>
void sample();
int main()
{
    auto int number = 7;
    printf("%d \n", number);
    sample();
    printf("%d \n", number);
    return 0;
    {
        void sample() {
            int number = 13;
            printf("%d \n", number);
        }
    }
    
}


#include<stdio.h>
void sample();
int main()
{
    register int number = 7;
    int * pointer;
    pointer = & number;
    printf("%u \n", &number);
    return 0;
  
}



#include<stdio.h>
void sample();
int main()
{
   
    int main(){
        sample();
        return 0;
    }
    void sample() {
        static int count = 0;
        count ++;
        int temperature = 28;
        printf("The temperature is %d . No.of. times sample() called : %d \n", temperature);
    }
  
}


#include<stdio.h>
void sample();
int main()
{
   
    int main(){
        sample();
        sample();
        sample();
        sample();
        sample();
        return 0;
    }
    void sample() {
        static int count = 0;
        count ++;
        int temperature = 28;
        printf("The temperature is %d . No.of. times sample() called : %d \n", temperature);
    }
  
}


#include<stdio.h>
void sample();
int main()
{
   
    int main(){
        int temperature = 28;
        printf("The temparature is %d \n", temparature);
        sample(28);
        return 0;
    }
    void sample(int temperature) {
        printf("The temperature is : %d \n", temperature);
    }
  
}


#include<stdio.h>
void sample();
int main()
{
    int main(){
        printf("The temparature is %d \n", temparature);
        sample();
        return 0;
    }
    void sample() {
        printf("The temperature is : %d \n", temperature);
    }
  
}
