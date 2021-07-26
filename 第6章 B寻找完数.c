#include<stdio.h>
#include<math.h>
int factorsum(int number);
int main()
{
    int m,n,i,j,s[10000];
    j=0;
    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        if(factorsum(i)==i)
            {if(j==0)
            printf("%d",i);
            else
            printf(" %d",i);
            j++;}
    }
}
int factorsum(int number)
{
    int i,s;
    double sq;
    sq=sqrt(number);
    s=0;


    for(i=1;i<number;i++)
    {
        if(number%i==0)
            s+=i;

    }

    return s;
}
