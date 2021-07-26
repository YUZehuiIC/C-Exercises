#include<stdio.h>
int main()
{
    int n,x,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            x=i*j;
            if(j==1)
                printf("%d",x);
            else
                printf(" %d",x);

        }
        if(i!=n)
                printf("\n");
    }
}
