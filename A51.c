#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *first=NULL;
struct node *new,*save;

void insertFront()
{
    new=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&new->info);

    if(first==NULL)
    {
        first=new;
        new->next=first;
    }
    else
    {
        save=first;

        while(save->next!=first)
        {
            save=save->next;
        }

        new->next=first;
        first=new;
        save->next=first;
    }
}

void insertEnd()
{
    new=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&new->info);

    if(first==NULL)
    {
        first=new;
        new->next=first;
    }
    else
    {
        save=first;

        while(save->next!=first)
        {
            save=save->next;
        }

        save->next=new;
        new->next=first;
    }
}

void deletePosition()
{
    int pos,i;

    struct node *temp;

    printf("Enter Position : ");
    scanf("%d",&pos);

    if(first==NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(pos==1)
    {
        save=first;

        while(save->next!=first)
        {
            save=save->next;
        }

        temp=first;

        if(first->next==first)
        {
            first=NULL;
        }
        else
        {
            first=first->next;
            save->next=first;
        }

        free(temp);
        return;
    }

    save=first;

    for(i=1;i<pos-1;i++)
    {
        if(save->next==first)
        {
            printf("Invalid Position\n");
            return;
        }

        save=save->next;
    }

    temp=save->next;

    if(temp==first)
    {
        printf("Invalid Position\n");
        return;
    }

    save->next=temp->next;

    free(temp);
}

void display()
{
    if(first==NULL)
    {
        printf("List is Empty\n");
        return;
    }

    save=first;

    do
    {
        printf("%d -> ",save->info);
        save=save->next;

    }while(save!=first);

    printf("FIRST\n");
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
                deletePosition();
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