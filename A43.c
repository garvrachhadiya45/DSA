#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *new, *save, *save1;


struct node* create()
{
    struct node *first = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
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

    return first;
}

void check(struct node *first, struct node *first1)
{
    save = first;
    save1 = first1;

    while(save != NULL && save1 != NULL)
    {
        if(save->data != save1->data)
        {
            printf("\nLinked Lists are NOT Same");
            return;
        }

        save = save->next;
        save1 = save1->next;
    }

    if(save == NULL && save1 == NULL)
        printf("\nLinked Lists are Same");
    else
        printf("\nLinked Lists are NOT Same");
}

int main()
{
    struct node *first, *first1;

    printf("Create First Linked List\n");
    first = create();

    printf("\nCreate Second Linked List\n");
    first1 = create();

    check(first, first1);

    return 0;
}