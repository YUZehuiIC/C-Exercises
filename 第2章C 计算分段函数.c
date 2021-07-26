#include<stdio.h>
#include<math.h>
int main(void)
{
int i,n;
double x,y;
scanf("%d",&n);

for(i=1;i<=n;)
{
    scanf("%lf",&x);
    if(x<0)
    {
       y=pow(x+1,2)+2*x+1.0/x;
    }
    else
        {y=sqrt(x);}
    printf("%.2f\n",y);
    i++;
}

}
