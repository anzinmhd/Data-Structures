//Linked List Insertions and Deletions
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
//Insertion from front
int insert_front()
{
    int flag=1;
    struct node *head,*newnode,*temp;
    head=0;
    while(flag==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d",&newnode->data);
        newnode->link=head;
        head=newnode;
        printf("\nEnter 0 to stop and 1 to continue");
        scanf("%d",&flag);
    }
    temp=head;
    printf("\n");
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}

//Insertion from end
int insert_end()
{
    struct node *head,*temp,*newnode;
    head=temp=0;
    int flag=1;
    while(flag==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
            newnode->link=0;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
            newnode->link=0;
        }
        printf("\n 1 to continue and 0 to stop");
        scanf("%d",&flag);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}

//Insertion from position
int ins_pos()
{
    struct node *head,*temp,*newnode,*t1,*t2;
    int flag=1,pos,c=0;
    head=0;
    while(flag==1)
    {
        
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->link=0;
        if(head==0)
        {
            head=newnode;
        }
        else
        {
            printf("Enter position between (1-%d) ",c);
            scanf("%d",&pos);
            int o=1;
            temp=head;
            while(temp!=0)
            {
             if(o==pos)   
             {
                t1=temp->link;
                temp->link=newnode;
                newnode->link=t1;
                break;
             }
             temp=temp->link;
             o+=1;
            }
        }
        c+=1;
        printf("Enter 1 to continue");
        scanf("%d",&flag);
    }
    t2=head;
    while(t2!=0)
    {
        printf("%d\t",t2->data);
        t2=t2->link;
    }
}

//insertion after an elemnet
int ins_ele()
{
    struct node *head,*temp,*newnode,*t1,*t2,*tem;
    int flag=1,ele;
    while(flag==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->link=head;
        head=newnode;
        printf("Enter 1 to continue");
        scanf("%d",&flag);
    }
    printf("Enter the element to insert after");
    scanf("%d",&ele);
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data");
    scanf("%d",&newnode->data);
    while(temp!=0)
    {
        t2=temp;
        temp=temp->link;
        if(t2->data==ele)
        {
            t1=t2->link;
            t2->link=newnode;
            newnode->link=t1;
        }
        printf("%d\t",temp->data);
    }
    tem=head;
    while(tem!=0)
    {
        printf("%d\t",tem->data);
        tem=tem->link;
    }
}

//Polynomial Addition Using Linked List
struct poly
{
    int coe,expo;
    struct poly *link;
};
int poly_add_linklist()
{
    struct poly *h1,*h2,*h3,*newnode,*t1,*t2,*t3;
    h1=h2=h3=0;
    int n=1;
    printf("Enter the data of first polynomial\n");
    while(n==1)
    {
        newnode=(struct poly*)malloc(sizeof(struct poly));
        printf("Enter Coeficient and Exponent ");
        scanf("%d%d",&newnode->coe,&newnode->expo);
        newnode->link=0;
        if(h1==0)
        {
            h1=t1=newnode;
        }
        else
        {
        t1->link=newnode;
        t1=newnode;
        }
        printf("\nDo you want to continue 1/0 ");
        scanf("%d",&n);
    }
    t1=h1;
    printf("\nFirst polynomial\n");
    while(t1!=0)
    {
        printf("%dX^%d +\t",t1->coe,t1->expo);
        t1=t1->link;
    }
    //2nd polynomial
    n=1;
    printf("\nEnter data of 2nd polynomial");
    while(n==1)
    {
        newnode=(struct poly*)malloc(sizeof(struct poly));
        newnode->link=0;
        printf("\nEnter coeficient and Exponent");
        scanf("%d%d",&newnode->coe,&newnode->expo);
        if(h2==0)
        {
            h2=t2=newnode;
        }
        else
        {
            t2->link=newnode;
            t2=newnode;
        }
        printf("Do you want to continue (1/0");
        scanf("%d",&n);
    }
    t2=h2;
    printf("\n2nd polynomial\n");
    while(t2!=0)
    {
        printf("%dX^%d +\t",t2->coe,t2->expo);
        t2=t2->link;
    }
    //comparing
    
}

int main()
{
    ins_ele();
}

