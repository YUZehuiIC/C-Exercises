#include<stdio.h>
int main()
{
    int n,a[6][6],b[6][6],c[6][6],i,j,p,q;


    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(p=0;p<n;p++)
            {

                    c[i][j]+=a[i][p]*b[p][j];

            }
            printf("%d",c[i][j]);
            if(j!=n-1)
                printf(" ");
        }
        if(i!=n-1)
             printf("\n");
    }
}

