#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag;
    j=0;
    char b[80],x;
    char a[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while((x=getchar())!=EOF)
    {
        flag=0;
        for(i=0;i<26;i++)
        {

            if(a[i]==x)
            {
                b[j]=a[25-i];
                flag=1;
            }
        }
        if(flag==0)
            b[j]=x;
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%c",b[i]);
    }
}
