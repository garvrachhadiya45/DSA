#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

void main()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    printf("Node Data = %d", newNode->info);

    free(newNode);

  
}