#include<stdio.h>
#include<string.h>
int max_len(char *s[],int n);
int main()
{
    int n,i,j,f;
    char temp[10][1000];
    scanf("%d",&n);
    char *s[10];
    getchar();
    for(i=0;i<n;i++)
    {
       gets(temp[i]);
       s[i]=temp[i];
    }

    f=max_len(s,n);
    printf("%d",f);
    return 0;
}
int max_len(char *s[],int n)
{
    int result,i;
    result=strlen(s[0]);
    for(i=1;i<n;i++)
    {
        if(result<strlen(s[i]))
            result=strlen(s[i]);
    }
    return result;
}
