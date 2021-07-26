#include<stdio.h>
#include<math.h>
int main(void)
{
int m,i;
double s;
s=0;
scanf("%d",&m);
for(i=m;i<=100;i++)
s=s+pow(i,2)+1.0/i;
printf("%.3f",s);
return 0;}
