#include<stdio.h>
#include<string.h>
struct bank 
{
    int area_code;
    char name[40];
    float net_balance;
} sbi;

int main()
{
    sbi.area_code = 102;
    strcpy (sbi.name, "State bank of India");
    sbi.net_balance = 2000.563;
    printf("Bank Name : %s \n Area Code : %d \n Net Balance : %f \n", sbi.name, sbi.area_code,sbi.net_balance);
    return 0;
}


#include<stdio.h>
#include<string.h>
struct bank 
{
    int area_code;
    char name[40];
    float net_balance;
    struct bank * demo;
} temp, *sbi;

int main()
{
  sbi = &temp;
  sbi -> area_code = 102;
  strcpy (sbi -> name, "State bank of India");
  sbi -> net_balance = 20000.563;
  return 0;
}


