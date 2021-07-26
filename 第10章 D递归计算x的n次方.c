#include<stdio.h>
double f(int x,int n);
int main()
{
    int n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    printf("%f",f(x,n));
}
double f(int x,int n)
{
    int i,result;
    result=1;
    for(i=0;i<n;i++)
    {
        result=result*x;
    }
    return result;
}
