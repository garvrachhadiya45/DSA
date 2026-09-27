#include <stdio.h>
#include<stdlib.h>
  
struct node
{
   int info;
   struct node *next;
};
struct node *first=NULL;
struct node *save,*new;
struct node* create()
{
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

void rev(){
    struct node *prev=NULL;
    struct node *next=NULL;
    save=first;
    while (save!=NULL)
    {
       next=save->next;
       save->next=prev;
       prev=save;
       save=next;
    }
    first=prev;
    

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
void main (){
    create();
    
    printf("Org linked list \n");
    display();
    rev();
    printf("\nReversed linked list\n");
    display();


}