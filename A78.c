#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int info;
    struct node *left;
    struct node *right;
};

struct node* newNode(int info) 
{
    struct node* new = (struct node*)malloc(sizeof(struct node));

    new->info = info;
    new->left = NULL;
    new->right = NULL;

    return new;
}

int check(struct node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }

    int l = check(root->left);
    if (l == -1) return -1;

    int r = check(root->right);
    if (r == -1) return -1;

    if (abs(l - r) > 1) 
    {
        return -1;
    }

    return (l>r ? l : r) + 1;
}

bool balace(struct node* root) 
{
    return check(root) != -1;
}

void main() 
{
    struct node* root1 = newNode(3);

    root1->left = newNode(9);
    root1->right = newNode(20);
    root1->right->left = newNode(15);
    root1->right->right = newNode(7);

    printf("1 : %s\n", balace(root1) ? "TRUE" : "FALSE");

    struct node* root2 = newNode(1);

    root2->left = newNode(2);
    root2->right = newNode(2);
    root2->left->left = newNode(3);
    root2->left->right = newNode(3);
    root2->left->left->left = newNode(4);
    root2->left->left->right = newNode(4);

    printf("2 : %s\n", balace(root2) ? "TRUE" : "FALSE");
}
