#include<stdio.h>
#include<math.h>
int main()
{
int i,a,n;

double x,temp,sum;

scanf("%d %d",&a,&n);
temp=a;
sum=0;

for(i=1;i<n;i++)
{
sum+=temp;
x=pow(10,i);
temp+=a*x;
}
sum+=temp;
printf("%.0f",sum);
}
