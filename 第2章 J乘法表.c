#include<stdio.h>
#include<math.h>
int main(void)
{
int n,i;
double power,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{power=pow(3,i);
 printf("%.0f ",power);

}
k=pow(3,n);
printf("%.0f",k);
return 0;
}
