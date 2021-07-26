#include<stdio.h>
int main()
{
  int n,i,j;
  while(scanf("%d",&n)!=EOF)
  {
      int x[n][n];
      printf("1\n");

      for(i=1;i<n;i++)
      {
        x[i][i]=x[i][0]=1;
        printf("1");
        if(n>2)
        {
            for(j=1;j<i;j++)
        {
            x[i][j]=x[i-1][j-1]+x[i-1][j];
            printf(" %d",x[i][j]);
        }
        }
        printf(" 1\n");
      }
      printf("\n");
  }


}
