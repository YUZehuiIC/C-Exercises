/*n=3   2*n-1
j01234        i
   *          0
  ***         1   *:j>=n-i-1&&j<=n+i-1
 *****        2
  ***         3   *:j>=n-(2*n-2-i)-1&&j<=n+(2*n-2-i)-1
   *          4     j>=1+i-n&&j<=3*n-i-3

*/
#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i=0;i<=(n-1);i++)
    {
        for(j=0;j<=(2*n-2);j++)
        {
            if(j>=(n-i-1)&&j<=(n+i-1))
                printf("*");
            else if(j<(n-i-1))
                printf(" ");
        }
        printf("\n");

    }

    for(i=n;i<=(2*n-2);i++)
    {
        for(j=0;j<=(2*n-2);j++)
        {
            if(j>=(1+i-n)&&j<=(3*n-i-3))
                printf("*");
            else if(j<(1+i-n))
                printf(" ");
        }
        if(i!=(2*n-2))
            printf("\n");
    }

}
