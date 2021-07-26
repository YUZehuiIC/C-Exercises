#include<stdio.h>
int main()
{
    char n;
    int k=0;
    while((n=getchar())!='\n')
    {
        if(n>'A'&&n!='E'&&n!='I'&&n!='O'&&n!='U'&&n<='Z')
        k++;
    }
    printf("%d",k);
}
