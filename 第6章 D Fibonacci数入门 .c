#include<stdio.h>
int fib(int n);
int main()
{
    int m,n,i,j,k;
    k=0;

    scanf("%d %d",&m,&n);

    for(i=m,j=2;i<=n;i++)
    {
        while(fib(j)<=i)
        {

            if(i==fib(j))
            {
                k++;
                if(k==1)
                    printf("%d",i);
                else
                    printf(" %d",i);

            }

            j++;


        }
    }

}
int fib(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        return fib(n-2)+fib(n-1);


}
