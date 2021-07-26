#include<stdio.h>
#include<string.h>
int main()
{
    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char day[10];
    int i,flag;

    gets(day);
    flag=0;
    for(i=0;i<7;i++)
    {
        if(strcmp(day,week[i])==0)
        {
            flag=1;
            printf("%d",i);
        }
    }
    if(flag==0)
        printf("-1");
}
