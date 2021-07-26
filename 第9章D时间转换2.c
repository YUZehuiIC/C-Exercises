#include<stdio.h>
struct time
{
    int hour,minute,second;
};
void time_switch(struct time *p,int n);
int main()
{
    int n;
    struct time times,*p;
    p=&times;
    scanf("%d:%d:%d",&times.hour,&times.minute,&times.second);
    scanf("%d",&n);
    time_switch(p,n);
    printf("%d:%d:%d",(*p).hour,(*p).minute,(*p).second);
}
void time_switch(struct time *p,int n)
{
    if((n+(*p).second)<60)
        (*p).second=n+(*p).second;
    else
    {
        if((*p).minute!=59)
            {
                (*p).minute=(*p).minute+1;
                (*p).second=n+(*p).second-60;
            }
        else
        {
            if((*p).hour!=23)
                {
                    (*p).hour=(*p).hour+1;
                    (*p).minute=0;
                    (*p).second=n+(*p).second-60;
                }
            else
                {(*p).hour=0;
                (*p).minute=0;
                (*p).second=n+(*p).second-60;}
        }
    }

}
