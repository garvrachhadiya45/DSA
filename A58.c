#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *first=NULL;
struct node *new,*save;

void push()
{
    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter Element : ");
    scanf("%d",&new->info);

    new->next=first;
    first=new;
}

void pop()
{
    if(first==NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    save=first;

    printf("Deleted Element = %d\n",save->info);

    first=first->next;

    free(save);
}

void display()
{
    if(first==NULL)
    {
        printf("Stack is Empty\n");
        return;
    }

    save=first;

    printf("\nStack Elements\n");

    while(save!=NULL)
    {
        printf("%d\n",save->info);
        save=save->next;
    }
}

void main()
{
    int ch;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }
}