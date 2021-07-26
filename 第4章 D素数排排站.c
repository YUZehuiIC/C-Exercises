#include<stdio.h>
int main()
{
    int m,n,i,j,x,k;
    int s[500];
    x=-1;

    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0) break;
        }
        if(j==i)
        {
            x++;
            s[x]=i;
        }
    }

    for(k=0;k<=x;k++)
    {
        if(k==x)
            printf("%d",s[k]);
        else if((k+1)%6==0)
            printf("%d\n",s[k]);

        else
            printf("%d ",s[k]);
    }
}
