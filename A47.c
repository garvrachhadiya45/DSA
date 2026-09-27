#include <stdio.h>
#include <stdlib.h>


struct node {
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

void sort(){
    struct node *temp;
    int x;

    for (save  = first; save!=NULL;save=save->next)
    {
        for (temp = save; temp!=NULL;temp=temp->next)
        {
            if (save->info>temp->info)
            {
                x=save->info;
                save->info=temp->info;
                temp->info=x;
            }
            
        }
        
    }
    
}
void main(){
    create();

    printf("\norg linked list\n");
    display();

    sort();


    printf("sorted linked list\n");
    display();
}