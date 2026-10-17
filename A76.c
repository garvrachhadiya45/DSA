#include <stdio.h> 
#include <stdlib.h>

struct node 
{
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* create(int x) 
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    if (new == NULL) 
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    new->info = x;
    new->lptr = NULL;
    new->rptr = NULL;
    return new;
}

struct node* insert(struct node* root, int x) 
{
    if (root == NULL) 
    {
        return create(x);
    }

    if (x < root->info) 
    {
        root->lptr = insert(root->lptr, x);
    }

    else if (x > root->info) 
    {
        root->rptr = insert(root->rptr, x);
    }

    return root;
}

int check(struct node* root1, struct node* root2)
{
    if(root1 == NULL && root2 == NULL)
    return 1;

    if(root1 == NULL || root2 == NULL)
    return 0;

    if(root1->info != root2->info)
    return 0;

    return check(root1->lptr, root2->lptr) &&
           check(root1->rptr, root2->rptr);
}

int main() 
{
    struct node* root1 = NULL;
    struct node* root2 = NULL;
    int c, x ,a,b;

    printf("Enter number of nodes for tree 1 : ");
    scanf("%d",&a);

    printf("\n");

    for(int i=0 ; i<a ; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&x);
        root1 = insert(root1,x);
    }

    printf("\n\n");

    printf("Enter number of nodes for tree 2 : ");
    scanf("%d",&b);

    printf("\n");

    for(int i=0 ; i<b ; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&x);
        root2 = insert(root2,x);
    }

    if(check(root1,root2))
        printf("same");

    else
        printf("Not same");
    
    return 0;
}