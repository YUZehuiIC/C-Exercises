#include<stdio.h>
int main()
{
    int n,x[10],j,i,min,max,kmin,kmax,temp;
    scanf("%d",&n);
    scanf("%d",&x[0]);
    min=max=x[0];
    kmin=kmax=0;

    for(i=1;i<n;i++)
    {

            scanf(" %d",&x[i]);

            if(x[i]<min)
                {min=x[i];
                kmin=i;}
            else if(x[i]>max)
                {max=x[i];
                kmax=i;}

    }

    temp=x[0];x[kmin]=temp;x[0]=min;
    if(temp!=max)
    {temp=x[n-1],x[kmax]=temp;x[n-1]=max;}
    else
    {
        temp=x[n-1];x[kmin]=temp;x[n-1]=max;
    }

    for(j=0;j<n;j++)
    {
        if(j==0)
            printf("%d",x[j]);
        else
            printf(" %d",x[j]);
    }
}
