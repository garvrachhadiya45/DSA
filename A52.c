#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *first=NULL;
struct node *last=NULL;
struct node *new,*save;

void create()
{
    int n,i;

    printf("Enter Number of Nodes : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));

        printf("Enter Data : ");
        scanf("%d",&new->info);

        if(first==NULL)
        {
            first=last=new;
            last->next=first;
        }
        else
        {
            last->next=new;
            last=new;
            last->next=first;
        }
    }
}

void split()
{
    struct node *slow,*fast;
    struct node *first2;

    if(first==NULL)
        return;

    slow=first;
    fast=first;

    while(fast->next!=first && fast->next->next!=first)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    if(fast->next->next==first)
        fast=fast->next;

    first2=slow->next;

    slow->next=first;
    fast->next=first2;

    printf("\nFirst Half : ");

    save=first;

    do
    {
        printf("%d -> ",save->info);
        save=save->next;
    }
    while(save!=first);

    printf("FIRST");

    printf("\n\nSecond Half : ");

    save=first2;

    do
    {
        printf("%d -> ",save->info);
        save=save->next;
    }
    while(save!=first2);

    printf("FIRST\n");
}

void display()
{
    if(first==NULL)
        return;

    save=first;

    do
    {
        printf("%d -> ",save->info);
        save=save->next;
    }
    while(save!=first);

    printf("FIRST\n");
}

void main()
{
    create();

    printf("\nOriginal List\n");
    display();

    split();
}