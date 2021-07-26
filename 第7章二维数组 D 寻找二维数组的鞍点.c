#include<stdio.h>
int main()
{
    int x[5][6],min[5][6],flag,n,i,j,k,result;
    n=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    for(j=0;j<6;j++)
    {
        min[0][j]=x[0][j];
        flag=0;

        for(i=0;i<5;i++)
        {
            if(min[flag][j]>x[i][j])
                {
                    flag=i;
                    min[flag][j]=x[i][j];
                }
        }

        result=1;
        for(k=0;k<6;k++)
        {
            if(x[flag][k]>min[flag][j])
                result=0;
        }
        if(result==1)
        {printf("%d %d\n",flag+1,j+1);
        n++;}
    }

    if(n==0)
        printf("none");

}
