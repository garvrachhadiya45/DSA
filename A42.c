#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first = NULL;
struct node *new, *save, *prev;

// Insert at Front
void insertFront()
{
    new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Data: ");
    scanf("%d", &new->data);

    new->next = first;
    first = new;
}

// Insert at End
void insertEnd()
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

// Display
void display()
{
    if(first == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    save = first;

    while(save != NULL)
    {
        printf("%d -> ", save->data);
        save = save->next;
    }

    printf("NULL\n");
}

// Delete First
void deleteFirst()
{
    if(first == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    save = first;
    first = first->next;

    free(save);

    printf("First Node Deleted\n");
}

// Delete Last
void deleteLast()
{
    if(first == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(first->next == NULL)
    {
        free(first);
        first = NULL;
        printf("Last Node Deleted\n");
        return;
    }

    save = first;

    while(save->next->next != NULL)
    {
        save = save->next;
    }

    free(save->next);
    save->next = NULL;

    printf("Last Node Deleted\n");
}

// Delete From Position
void deletePosition()
{
    int pos, i;

    printf("Enter Position: ");
    scanf("%d", &pos);

    if(first == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(pos == 1)
    {
        deleteFirst();
        return;
    }

    save = first;

    for(i = 1; i < pos; i++)
    {
        prev = save;
        save = save->next;

        if(save == NULL)
        {
            printf("Invalid Position\n");
            return;
        }
    }

    prev->next = save->next;
    free(save);

    printf("Node Deleted\n");
}

// Count Nodes
void countNode()
{
    int count = 0;

    save = first;

    while(save != NULL)
    {
        count++;
        save = save->next;
    }

    printf("Total Nodes = %d\n", count);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Insert Front\n");
        printf("2. Display\n");
        printf("3. Delete First\n");
        printf("4. Insert End\n");
        printf("5. Delete Last\n");
        printf("6. Delete Position\n");
        printf("7. Count Nodes\n");
        printf("8. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insertFront();
                break;

            case 2:
                display();
                break;

            case 3:
                deleteFirst();
                break;

            case 4:
                insertEnd();
                break;

            case 5:
                deleteLast();
                break;

            case 6:
                deletePosition();
                break;

            case 7:
                countNode();
                break;

            case 8:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 8);

    return 0;
}