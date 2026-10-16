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

struct node* findMin(struct node* root) 
{
    struct node* current = root;
    while (current != NULL && current->lptr != NULL) 
    {
        current = current->lptr;
    }
    return current;
}

struct node* dlt(struct node* root, int x) 
{
    if (root == NULL) 
    {
        printf("Element %d not found\n", x);
        return root;
    }

    if (x < root->info) 
    {
        root->lptr = dlt(root->lptr, x);
    } 
    else if (x > root->info) 
    {
        root->rptr = dlt(root->rptr, x);
    } 
    else 
    {
        if (root->lptr == NULL) 
        {
            struct node* temp = root->rptr;
            free(root);
            return temp;
        }

        else if (root->rptr == NULL) 
        {
            struct node* temp = root->lptr;
            free(root);
            return temp;
        }

        struct node* temp = findMin(root->rptr);
        root->info = temp->info;
        root->rptr = dlt(root->rptr, temp->info);
    }
    return root;
}

struct node* search(struct node* root, int x) 
{
    if (root == NULL || root->info == x) 
    {
        return root;
    }
    if (x < root->info) 
    {
        return search(root->lptr, x);
    }
    return search(root->rptr, x);
}

void pre(struct node* root) 
{
    if (root != NULL) 
    {
        printf("%d ", root->info);
        pre(root->lptr);
        pre(root->rptr);
    }
}

void in(struct node* root) 
{
    if (root != NULL) 
    {
        in(root->lptr);
        printf("%d ", root->info);
        in(root->rptr);
    }
}

void post(struct node* root) 
{
    if (root != NULL) 
    {
        post(root->lptr);
        post(root->rptr);
        printf("%d ", root->info);
    }
}

void freeTree(struct node* root) 
{
    if (root != NULL) 
    {
        freeTree(root->lptr);
        freeTree(root->rptr);
        free(root);
    }
}

int main() 
{
    struct node* root = NULL;
    int c, x;

    while (1) 
    {
        printf("\n 1. Insert a node");
        printf("\n 2. Delete a node");
        printf("\n 3. Search a node");
        printf("\n 4. pre Traversal");
        printf("\n 5. in Traversal");
        printf("\n 6. post Traversal");
        printf("\n 7. Exit");
        scanf("%d", &c);

        switch (c) 
        {
            case 1:
                printf("Enter x to insert: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;

            case 2:
                printf("Enter x to delete: ");
                scanf("%d", &x);
                root = dlt(root, x);
                break;

            case 3:
                printf("Enter x to search: ");
                scanf("%d", &x);
                if (search(root, x) != NULL) 
                {
                    printf("Element %d FOUND \n", x);
                } 
                else 
                {
                    printf("Element %d NOT FOUND \n", x);
                }
                break;

            case 4:
                printf("preorder Traversal: ");
                pre(root);
                printf("\n");
                break;

            case 5:
                printf("inorder Traversal: ");
                in(root);
                printf("\n");
                break;

            case 6:
                printf("postorder Traversal: ");
                post(root);
                printf("\n");
                break;

            case 7:
                freeTree(root);
                printf("End \n");
                exit(0);

            default:
                printf("Invalid!\n");
        }
    }
    return 0;
}
