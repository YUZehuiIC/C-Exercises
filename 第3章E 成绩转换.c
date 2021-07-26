#include<stdio.h>
int main(void)
{
char grade;
scanf("%c",&grade);
switch(grade){
  case 'A':printf("90~100");break;
  case 'B':printf("80~89");break;
  case 'C':printf("70~79");break;
  case 'D':printf("60~69");break;
  case 'E':printf("0~59");break;
 }
 return 0;
}
