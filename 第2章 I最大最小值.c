#include<stdio.h>
int main(void)
{int n,i,a[n],min,max;
min=1;
max=1;
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{

if(a[min]>a[i])
{min=i;}
if(a[max]<a[i])
max=i;
}
printf("%d %d\n%d %d",a[min],min,a[max],max);
return 0;
}
