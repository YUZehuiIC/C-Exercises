#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct info{
  char num[30];
  char name[30];
int grade;
  struct info *next;
};

int main()
{
    struct info *head=NULL,*p,*temp=NULL;
    int min_grade,grade;

    char name[30],num[30];

    int size=sizeof(struct info);
    while(1)
    {
        scanf("%s\n",&num);
        if(num[0]=='0')
            break;
        scanf("%s\n%d",name,&grade);

        p=(struct info *)malloc(size);
        strcpy(p->num,num);
        p->grade=grade;
        strcpy(p->name,name);

        if(head==NULL)
            head=p;
        else
            temp->next=p;
        temp=p;
    }

    scanf("%d",&min_grade);
    for(p=head;p!=NULL;p=p->next)
    {
        if(p->grade>=min_grade)
            printf("%s\n%s\n%d\n",p->num,p->name,p->grade);
    }
    return 0;
}


