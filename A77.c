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

int mirror(struct node *lptr , struct node *rptr)
{
    if (lptr == NULL && rptr == NULL)
        return 1;

    if (lptr == NULL || rptr == NULL)
        return 0;

    return (lptr->info == rptr->info) &&
           mirror(lptr->lptr, rptr->rptr) &&
           mirror(lptr->rptr, rptr->lptr);
}

int check(struct node* root)
{
    if(root == NULL)
    return 1;

    return mirror(root->lptr,root->rptr);
}

int main() 
{
    struct node* root = NULL;
    int c, x ,a,b;

    root = create(10);

    root->lptr = create(5);
    root->rptr = create(5);

    root->lptr->lptr = create(3);
    root->lptr->rptr = create(6);

    root->rptr->lptr = create(6);
    root->rptr->rptr = create(3);

    if(check(root))
        printf("symmetric");

    else
        printf("Not symmetric");
    
    return 0;
}