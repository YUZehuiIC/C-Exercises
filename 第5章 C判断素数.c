#include<stdio.h>

int main()
{
    int m,n,x,k,j,i,s[900],ud,hd,td,flag;

    k=flag=x=0;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(i=m;i<=n;i++)
        {
            ud=i%10;
            td=i/10%10;
            hd=i/100;
            if(i==(ud*ud*ud+td*td*td+hd*hd*hd))
            {
                s[k]=i;
                k++;
            }
        }

        if(k==0)
            printf("no\n");
        else if(k==1)
            {printf("%d\n",s[0]);
            }
        else
        {
            for(j=0;j<k-1;j++)
                {printf("%d ",s[j]);
                }
            printf("%d\n",s[k-1]);
           ;

        }
        k=0;
        flag++;
    }




}
