
#include<stdio.h>
int main()
{
    char ch,ch1;
    int n;
    n=1;
    ch1=' ';
    while((ch=getchar())!=EOF)
    {if(ch==' ')
        {if(ch!=ch1)
            n++;}
    ch1=ch;}

    printf("%d",n);
}
