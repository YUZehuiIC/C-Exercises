// �������ȴ�Сʱ�������ˣ��滻Ϊ0��������ȵ����
#include<stdio.h>
int main()
{
    int x[10],s[10],single[10],couple[10],i,j,m,n,M,N,flag;
    scanf("%d %d %d %d %d %d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8],&x[9]);
    for(i=0;i<10;i++)
    {
        s[i]=0;
        for(j=0;j<10;j++)
        {
            if(x[j]>s[i])
                {s[i]=x[j];
                flag=j;}
        }
        x[flag]=0;
    }
//ʵ�ֽ�����

    for(i=0,M=0,N=0;i<10;i++)
    {
        if(s[i]%2!=0)
        {
            single[M]=s[i];
            M++;

        }
        else
        {
            couple[N]=s[i];
            N++;
        }
    }

    if(M!=0)
    {
        printf("%d",single[0]);
        for(m=1;m<M;m++)
        {
            printf(" %d",single[m]);
        }

    }
    if(M!=0&&N!=0)
        printf(" ");
    if(N!=0)
    {
        printf("%d",couple[0]);
        for(n=1;n<N;n++)
        {
            printf(" %d",couple[n]);
        }

    }

}

