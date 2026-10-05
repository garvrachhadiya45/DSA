#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
};

struct node *first=NULL;
struct node *last=NULL;
struct node *new,*save;

void insertFront()
{
    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&new->info);

    new->prev=NULL;

    if(first==NULL)
    {
        first=last=new;
        new->next=NULL;
    }
    else
    {
        new->next=first;
        first->prev=new;
        first=new;
    }
}

void insertEnd()
{
    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&new->info);

    new->next=NULL;

    if(first==NULL)
    {
        first=last=new;
        new->prev=NULL;
    }
    else
    {
        new->prev=last;
        last->next=new;
        last=new;
    }
}

void deletePos()
{
    int pos,i;
    struct node *temp;

    if(first==NULL)
    {
        printf("List is Empty\n");
        return;
    }

    printf("Enter Position : ");
    scanf("%d",&pos);

    if(pos==1)
    {
        temp=first;

        if(first==last)
        {
            first=NULL;
            last=NULL;
        }
        else
        {
            first=first->next;
            first->prev=NULL;
        }

        free(temp);
        return;
    }

    save=first;

    for(i=1;i<pos;i++)
    {
        if(save==NULL)
        {
            printf("Invalid Position\n");
            return;
        }

        save=save->next;
    }

    if(save==NULL)
    {
        printf("Invalid Position\n");
        return;
    }

    if(save==last)
    {
        last=last->prev;
        last->next=NULL;
    }
    else
    {
        save->prev->next=save->next;
        save->next->prev=save->prev;
    }

    free(save);
}

void display()
{
    if(first==NULL)
    {
        printf("List is Empty\n");
        return;
    }

    save=first;

    while(save!=NULL)
    {
        printf("%d <-> ",save->info);
        save=save->next;
    }

    printf("NULL\n");
}

void main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert Front");
        printf("\n2.Insert End");
        printf("\n3.Delete Position");
        printf("\n4.Display");
        printf("\n5.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insertFront();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                deletePos();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }
}