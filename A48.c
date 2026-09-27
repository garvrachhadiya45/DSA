#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *first = NULL;
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
        scanf("%d", &new->info);

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

void display()
{
    save = first;

    while(save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->next;
    }

    printf("NULL\n");
}

int count()
{
    int c = 0;

    save = first;

    while(save != NULL)
    {
        c++;
        save = save->next;
    }

    return c;
}

void swapNode(int k)
{
    int i, total;

    struct node *prev1 = NULL;
    struct node *prev2 = NULL;
    struct node *node1,*node2,*temp;
   

    total = count();

    if(k <= 0 || k > total)
    {
        printf("Invalid K\n");
        return;
    }

    node1 = first;

    for(i = 1; i < k; i++)
    {
        prev1 = node1;
        node1 = node1->next;
    }

    node2 = first;

    for(i = 1; i < total - k + 1; i++)
    {
        prev2 = node2;
        node2 = node2->next;
    }

    if(node1 == node2)
        return;

    if(prev1 != NULL)
        prev1->next = node2;
    else
        first = node2;

    if(prev2 != NULL)
        prev2->next = node1;
    else
        first = node1;

    temp = node1->next;
    node1->next = node2->next;
    node2->next = temp;
}

void main()
{
    int k;

    create();

    printf("\nOriginal Linked List\n");
    display();

    printf("\nEnter K: ");
    scanf("%d", &k);

    swapNode(k);

    printf("\nLinked List After Swapping\n");
    display();
}