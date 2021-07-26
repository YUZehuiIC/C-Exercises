#include<stdio.h>
int main()
{
    int q[14]={0};
    int i;
    char x;
    char p[14]={'2','3','4','5','6','7','8','9','1','0','J','Q','K','A'};
    while((x=getchar())!=EOF)
    {
        for(i=0;i<14;i++)
        {
            if(x==p[i])
                q[i]=1;
        }
    }

    for(i=0;i<14;i++)
    {
        if(q[i]==0)
            printf("%c",p[i]);
    }
}
