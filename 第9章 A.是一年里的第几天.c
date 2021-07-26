#include<stdio.h>
struct date
{
    int year,month,day;
};
int main()
{
    struct date the_date;
    int month_day[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
    int n=0;
    int i;
    scanf("%d-%d-%d",&the_date.year,&the_date.month,&the_date.day);

    if(the_date.year%400==0 || (the_date.year%100!=0 && the_date.year%4==0))
    {
        month_day[2]=29;
    }
    else
        month_day[2]=28;
    for(i=0;i<the_date.month;i++)
    {
        n+=month_day[i];
    }
    n+=the_date.day;
    printf("%d\n",n);
}
