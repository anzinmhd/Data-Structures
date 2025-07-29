#include<stdio.h>
#include<stdlib.h>
struct doubly
{
    struct doubly *link1;
    int data;
    struct doubly *link2;
};

//Insertion
int ins()
{
    struct doubly *head,*newnode,*t,*temp;
    int flag=1;
    head=0;
    while(flag==1)
    {
        newnode=(struct doubly*)malloc(sizeof(struct doubly));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->link2=0;
        if(head==0)
        {
            head=newnode;
            newnode->link1=0;
        }
        else
        {
            t->link2=newnode;
            newnode->link1=t;
        }
        t=newnode;
        printf("Enter 1 to continue");
        scanf("%d",&flag);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link2;
    }
    printf("\n");
    temp=t;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link1;
    }
}

//Insertion from front
int ins_fro()
{
    struct doubly *head,*newnode,*temp,*end;
    head=0;
    int flag=1;
    while(flag==1)
    {
        newnode=(struct doubly*)malloc(sizeof(struct doubly));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->link1=0;
        newnode->link2=head;
        head->link1=newnode;
        head=newnode;
        printf("Enter 1 to continue");
        scanf("%d",&flag);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        end=temp;
        temp=temp->link2;
    }
    printf("\n");
    while(end!=0)
    {
        printf("%d\t",end->data);
        end=end->link1;
    }

}
int main()
{
    ins();
}