#include <stdio.h>
int main()
{
    float PI = 3.14;
    int radius = 5;
    printf("Area of circle is %f \n", PI * radius * radius);
    return 0;
}


#include <stdio.h>
#define PI 3.141
#define area (r) (PI * r * r)
#define state "Tamil Nadu"
int main()
{
    int radius = 5;
    printf("Area of circle is %f \n", PI * radius * radius);
    return 0;
}


#include <stdio.h>
#define PI 3.141
#define area (r) (PI * r * r)
int main()
{
    int radius = 5;
    printf("Area of circle is %f \n", area (radius));
    return 0;
}


#include <stdio.h>
#define PI 3.141
#define area (r) (PI * r * r)
#if PI == 3.141
#define state "PI value has 3 decimal numbers"
#else
#define state "PI value does not have 3 decimal numbers"
#endif
int main()
{
    int radius = 5;
    printf("Area of circle is %f; %s \n", area(radius), state);
    return 0;
}




#include <stdio.h>
#define PI 3.141
#define area (r) (PI * r * r)
#if PI == 3
#define state "PI value has 3 decimal numbers"
#else
#define state "PI value does not have 3 decimal numbers"
#endif
int main()
{
    int radius = 5;
    printf("Area of circle is %f; %s \n",(float) area(radius), state);
    return 0;
}



