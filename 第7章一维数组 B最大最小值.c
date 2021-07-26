#include<stdio.h>
int main()
{
    int n,x[10],i,min,max,kmin,kmax;
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

    printf("%d %d\n",min,kmin);
    printf("%d %d",max,kmax);
}
