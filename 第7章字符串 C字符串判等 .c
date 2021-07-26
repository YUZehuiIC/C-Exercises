#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag;
    char s1[100],s2[100],x;

    while((x=getchar())!=EOF)
    {
        i=j=0;
        while((s1[i]=getchar())!='\n')
    {
        if(s1[i]>='a'&&s1[i]<='z')
            s1[i]=s1[i]+'A'-'a';

        if(s1[i]!=' ')
             i++;

    }

        while((s2[j]=getchar())!='\n')
    {

        if(s2[j]>='a'&&s2[j]<='z')
            s2[j]=s2[j]+'A'-'a';

        if(s2[j]!=' ')
            j++;
    }

    flag=0;
    if(i==j)
    {
        for(i=0;i<=j;i++)
        {
            if(s1[i]!=s2[i])
                flag=1;
        }
    }
    else
        flag=1;
    if(flag==0)
        printf("yes\n");
    else
        printf("no\n");
    }
}
