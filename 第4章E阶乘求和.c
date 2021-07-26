
#include<stdio.h>
int fact(int n);
int main()
{
    int i,n,f;
    double item,e;
    e=0;

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        f=fact(i);
        item=1.0/f;
        e+=item;

    }

    printf("%.4f",e);
}
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return fact(n-1)*n;
}
