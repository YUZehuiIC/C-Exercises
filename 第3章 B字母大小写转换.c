
#include<stdio.h>
int main(void)
{
char ch,x;
ch=getchar();
if(islower (ch))
{x=toupper(ch);
printf("%c",x);
}
else if(isupper(ch))
{x=tolower(ch);
printf("%c",x);
}
else
{printf("input error");
}}
