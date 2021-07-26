#include<stdio.h>
int main()
{
    int n[5],x,i,k,flag,index,indexleft,indexright;
    scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
    scanf("%d",&x);
    flag=0;indexleft=0;

    for(i=0;i<5;i++)
    {
        if(x==n[i])
            {index=i;flag=1;break;}
        else if(x>n[i])
            {indexleft=i;flag=0;}
        else if(x<n[i])
            {indexright=i;flag=0;break;}
    }

    if(flag==1)
    {
        printf("Yes\n");
        printf("%d",index);
    }
    else if(flag==0)
    {
        if(indexright==0)
        {
            printf("No\n");
            printf("%d",x);
        for(k=0;k<5;k++)
        {
                printf(" %d",n[k]);
        }


        }
        else
        {
        printf("No\n");
        for(k=0;k<=indexleft;k++)
        {
            if(k==0)
                printf("%d",n[k]);
            else
                printf(" %d",n[k]);
        }

        printf(" %d",x);
        if(indexleft!=4)
        {for(k=indexleft+1;k<5;k++)
            printf(" %d",n[k]);}
        }

    }
}
