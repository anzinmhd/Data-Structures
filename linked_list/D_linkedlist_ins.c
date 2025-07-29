#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *nex;
};

int ins_end()
{
    struct node *newnode,*temp,*head,*tail,*tem1;
    head=0;
    int flag=1;
    while(flag==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->nex=0;
        if(head==0)
        {
            head=newnode;
            newnode->pre=0;
        }
        else
        {
            tail->nex=newnode;
            newnode->pre=tail;
        }
        tail=newnode;
        printf("Enter 1 to continue");
        scanf("%d",&flag);
    }
    temp=head;
    printf("Forward Traversing ");
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->nex;
    }
    tem1=tail;
    printf("\nReverse Traversing ");
    while(tem1!=0)
    {
        printf("%d\t",tem1->data);
        tem1=tem1->pre;
    }
}

int ins_fro()
{
    struct node *head1,*temp1,*newnode1,*tail1,*t,*tem;
    head1=t=0;
    int fl=1;
    while(fl==1)
    {
        newnode1=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode1->data);
        newnode1->pre=0;
        if(head1==0)
        {
            tail1=newnode1;
        }
        if(t!=0)
        {
            t->pre=newnode1;
        }
        newnode1->nex=head1;
        head1=t=newnode1;
        printf("Enter 1 to continue");
        scanf("%d",&fl);
    } 
    printf("Forward Traversing ");
    tem=head1;
    while(tem!=0)
    {
        printf("%d\t",tem->data);
        tem=tem->nex;
    }
    temp1=tail1;
    printf("\nReverse Transvering ");
    while(temp1!=0)
    {
        printf("%d\t",temp1->data);
        temp1=temp1->pre;
    }
}

int ins_pos()
{
    
}

int main()
{
    ins_fro();
}
