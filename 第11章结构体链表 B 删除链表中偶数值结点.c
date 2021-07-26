#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct info{
  int n;
  struct info *next;
};
int main()
{
    struct info *head=NULL,*p,*temp=NULL;
    int n;

    int size=sizeof(struct info);
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        p=(struct info *)malloc(size);
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
        if(p->n%2!=0)
            printf("%d\n",p->n);
    }
    printf("-1");
    return 0;
}



