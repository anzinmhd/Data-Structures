#include<stdio.h>
#include<stdlib.h>
struct doubly
{
    struct doubly *link1;
    int data;
    struct doubly *link2;
};

struct doubly *head1,*head2,*newnode,*temp1,*temp2;
head1=head2=0;
int poly1()
{
    struct doubly *t;
    int flag=1;
    while(flag==1)
    {
        newnode=(struct doubly*)malloc(sizeof(struct doubly));
        newnode->link2=0;
        printf("Enter data");
        scanf("%d",&newnode->data);
        if(head1==0)
        {
            head1=newnode;
            head1->link1=0;
        }
        else
        {
            t->link2=newnode;
            newnode->link1=t;
        }
        t=newnode;
    }
}