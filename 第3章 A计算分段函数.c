#include<stdio.h>
int sign(int x);
int main(void)
{
int y,i,N,x[3];
scanf("%d",&N);
for(i=0;i<=2;i++)
{scanf("%d",&x[i]);
y=sign(x[i]);
printf("%d\n",y);}
return 0;
}
int sign(int x)
{
if(x>0)
return 1;
else if(x==0)
return 0;
else
return -1;

}
