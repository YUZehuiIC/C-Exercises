#include<stdio.h>
int main(void)
{int m,time1,h1,m1,time2,h2,m2;
scanf("%d%d",&time1,&time2);
h1=time1/100;m1=time1%100;
h2=time2/100;m2=time2%100;
m=60*(h2-h1)+(m2-m1);
printf("%d",m);
}
