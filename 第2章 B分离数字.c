#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
printf("%d\n%d\n%d\n",n%10,n/10%10,n/100);
return 0;
}
