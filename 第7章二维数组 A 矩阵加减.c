#include<stdio.h>
int main()
{
    int n,a[6][6],b[6][6],c[6][6],d[6][6],i,j;
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
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
            if(j!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%d",d[i][j]);
            if(j!=n-1)
                printf(" ");
        }
        if(i!=n-1)
            printf("\n");
    }
}
