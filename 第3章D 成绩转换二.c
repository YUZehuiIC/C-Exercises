#include<stdio.h>
int main(void)
{int i,n,A,B,C,D,E;
scanf("%d",&n);
double x[n];
A=0;
B=0;
C=0;
D=0;
E=0;

for(i=0;i<n;i++)
{scanf("%lf",&x[i]);
if(x[i]>=90&&x[i]<=100)
    A++;
else if(x[i]>=80&&x[i]<90)
B++;
else if(x[i]>=70&&x[i]<80)
C++;
else if(x[i]>=60&&x[i]<70)
D++;
else
E++;
}
printf("%d %d %d %d %d",A,B,C,D,E);
return 0;
}
