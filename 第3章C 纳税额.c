#include<stdio.h>
int main(void)
{
int salary;
double rate,tax;
scanf("%d",&salary);
if(salary<=850)
rate=0;
else if(salary>850&&salary<=1350)
rate=0.05;
else if(salary>1350&&salary<=2850)
rate=0.1;
else if(salary>2850&&salary<=5850)
rate=0.15;
else
rate=0.2;
tax=rate*(salary-850);
if(salary>850)
    printf("%.2f",tax);
else
    printf("0.00");
return 0;
}
