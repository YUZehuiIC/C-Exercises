#include<stdio.h>
#include<math.h>
int main(void)
{
float a,b,c,p,area,perimeter;
scanf("%f%f%f",&a,&b,&c);
p=(a+b+c)/2;
if(a>0&&b>0&&c>0&&(a+b)>c &&(a+c)>b && (b+c)>a)
{
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    perimeter=2*p;
    printf("%.2f %.2f",area,perimeter);
}
else{
    printf("These sides do not correspond to a valid triangle");
}
}
