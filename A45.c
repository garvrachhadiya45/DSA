#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first = NULL;
struct node *first1 = NULL;
struct node *new, *save;


void create()
{
    int n, i;

    printf("Enter Number of Nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data: ");
        scanf("%d", &new->data);

        new->next = NULL;

        if(first == NULL)
        {
            first = new;
        }
        else
        {
            save = first;

            while(save->next != NULL)
            {
                save = save->next;
            }

            save->next = new;
        }
    }
}

void copyList()
{
    struct node *copy, *temp;

    save = first;

    while(save != NULL)
    {
        copy = (struct node *)malloc(sizeof(struct node));

        copy->data = save->data;
        copy->next = NULL;

        if(first1 == NULL)
        {
            first1 = copy;
        }
        else
        {
            temp = first1;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = copy;
        }

        save = save->next;
    }
}

void display(struct node *first)
{
    save = first;

    while(save != NULL)
    {
        printf("%d -> ", save->data);
        save = save->next;
    }

    printf("NULL\n");
}

void main()
{
    create();

    copyList();

    printf("\nOriginal Linked List:\n");
    display(first);

    printf("\nCopied Linked List:\n");
    display(first1);

};