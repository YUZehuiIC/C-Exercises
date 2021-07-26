#include<stdio.h>
double f(int n);
int main(void)
{int m,n,s;
scanf("%d %d",&m,&n);
s=f(n)/(f(m)*f(n-m));
printf("%d",s);
return 0;
}
double f(int n)
{int i;
double result=1;
for(i=1;i<=n;i++)
{result=i*result;}
return result;
}
