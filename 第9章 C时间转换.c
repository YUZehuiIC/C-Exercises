#include<stdio.h>
struct time
{
    int hour,minute,second;
};
int main()
{
    struct time times;
    int n;
    scanf("%d:%d:%d",&times.hour,&times.minute,&times.second);
    scanf("%d",&n);
    if((n+times.second)<60)
        printf("%d:%d:%d",times.hour,times.minute,n+times.second);
    else
    {
        if(times.minute!=59)
            printf("%d:%d:%d",times.hour,times.minute+1,n+times.second-60);
        else
        {
            if(times.hour!=23)
                printf("%d:%d:%d",times.hour+1,00,n+times.second-60);
            else
                printf("%d:%d:%d",00,00,n+times.second-60);
        }
    }
}
