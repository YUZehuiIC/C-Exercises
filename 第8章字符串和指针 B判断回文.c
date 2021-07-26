#include<stdio.h>
#include<string.h>
int main()
{
    char l[1000]={0};
    char r[1000]={0};

    int i,n;
    i=0;

    while((l[i]=getchar())!='\n')
        i++;
    n=i-1;

    for(i=0;i<=n;i++)
    {
        r[i]=l[n-i];
    }
    l[n+1]=r[n+1]='\0';

    if(strcmp(l,r)==0)
        printf("Yes\n");
    else
        printf("No\n");
}
