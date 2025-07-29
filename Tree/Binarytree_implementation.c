#include<stdio.h>
#include<stdlib.h>

//structure creation
struct node
{
    int data;
    struct node *left,*right;
};

//function creation for node creation
struct node *create()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter data (-1 for no node) : ");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d\n",x);
    newnode->left=create();
    printf("Enter right node of %d\n",x);
    newnode->right=create();
    return newnode;
}

//fn for preorder traversal
void preorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    printf("\t%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

//In order traversal
void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("\t%d",root->data);
    inorder(root->right);
}

//Post order travrsal
void postorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("\t%d",root->data);
}

//main
void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("Preorder Traversal is");
    preorder(root);
    printf("\n");
    printf("In order Traversal is");
    inorder(root);
    printf("\n");
    printf("Post order Traversal is");
    postorder(root);
}
