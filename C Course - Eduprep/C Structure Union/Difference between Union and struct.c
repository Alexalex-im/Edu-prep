#include<stdio.h>
int main() {
    union bank {
        char name[40];
        int customer;
    };
    union bank cub;
    strcpy(cub.name, "City union bank");
    cub.customer = 97;
    printf("%s has %d customers \n", cub.name[6]);
    return 0;
}

#include<stdio.h>
int main() {
    union bank {
        char name[40];
        int customers;
    };

    union bank cub;
    struct s_bank {
        char name[40];
        int customers;
    };
    struct s_bank ind;
    printf("size of struct : %d \n size of union : %d", sizeof(ind), sizeof(cub));
    return 0;
}