#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *save, *new;
struct node *first = NULL;

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

    return first;
}

void removedup()
{
    save = first;

    while(save != NULL && save->next != NULL)
    {
        if(save->info == save->next->info)
        {
            new = save->next;      
            save->next = new->next;
            free(new);
        }
        else
        {
            save = save->next;
        }
    }
}

void display()
{
    save = first;

    printf("Linked List: ");

    while(save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->next;
    }

    printf("NULL");
}

int main()
{
    first = create();

    removedup();

    display();

    return 0;
}