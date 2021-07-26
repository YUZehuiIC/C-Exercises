#include<stdio.h>
#include<math.h>
int main(void)
{
int i=1;
double eps,s;
s=0;
scanf("%lf",&eps);
while(1.0/i>=eps)
{s=s+pow(-1,i+1)*(1.0/i);
i=i+3;}
s=s+pow(-1,i+1)*(1.0/i);
printf("%.6f",s);
return 0;
}
