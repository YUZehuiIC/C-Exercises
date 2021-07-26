#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct info{
  int k;
  int n;
  struct info *next;
};
int main()
{
    struct info *head=NULL,*p,*temp=NULL;
    int k,n,num,i,flag;
    flag=0;
    scanf("%d",&num);
    int size=sizeof(struct info);
    for(i=0;i<num;i++)
    {
        scanf("%d%d",&k,&n);

        p=(struct info *)malloc(size);
        p->k=k;
        p->n=n;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            temp->next=p;
        temp=p;
    }
    for(p=head;p!=NULL;p=p->next)
    {
        if(p->k==1)
        {
            if(flag!=0)
              printf("+");
            if(p->n==0)
                printf("%d",p->k);
            else if(p->n==1)
                printf("x");
            else
                printf("x^%d",p->n);
            flag++;
        }
        else if(p->k==-1)
        {
            if(p->n==0)
                printf("%d",p->k);
            else if(p->n==1)
                printf("-x");
            else
                printf("-x^%d",p->n);
            flag++;
        }
        else if(p->k<0)
        {
             if(p->n==0)
                printf("%d",p->k);
            else if(p->n==1)
                printf("%dx",p->k);
            else
                printf("%dx^%d",p->k,p->n);
            flag++;
        }
        else if(p->k>0)
        {
            if(flag!=0)
              printf("+");
            if(p->n==0)
                printf("%d",p->k);
            else if(p->n==1)
                printf("%dx",p->k);
            else
                printf("%dx^%d",p->k,p->n);
            flag++;
        }
    }
    printf("\n");
    return 0;
}




