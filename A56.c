#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    struct node *prev;
    char song[30];
    struct node *next;
};

struct node *first=NULL;
struct node *last=NULL;
struct node *new,*save;
struct node *current=NULL;

void addSong()
{
    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter Song Name : ");
    scanf("%s",new->song);

    new->next=NULL;

    if(first==NULL)
    {
        new->prev=NULL;
        first=last=new;
    }
    else
    {
        new->prev=last;
        last->next=new;
        last=new;
    }
}

void deleteSong()
{
    char name[30];

    printf("Enter Song Name : ");
    scanf("%s",name);

    save=first;

    while(save!=NULL)
    {
        if(strcmp(save->song,name)==0)
        {
            if(save==first && save==last)
            {
                first=NULL;
                last=NULL;
            }
            else if(save==first)
            {
                first=first->next;
                first->prev=NULL;
            }
            else if(save==last)
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
            printf("Song Deleted\n");
            return;
        }

        save=save->next;
    }

    printf("Song Not Found\n");
}

void playNext()
{
    if(first==NULL)
    {
        printf("Playlist Empty\n");
        return;
    }

    if(current==NULL)
        current=first;
    else if(current->next!=NULL)
        current=current->next;

    printf("Now Playing : %s\n",current->song);
}

void playPrevious()
{
    if(first==NULL)
    {
        printf("Playlist Empty\n");
        return;
    }

    if(current==NULL)
        current=first;
    else if(current->prev!=NULL)
        current=current->prev;

    printf("Now Playing : %s\n",current->song);
}

void display()
{
    if(first==NULL)
    {
        printf("Playlist Empty\n");
        return;
    }

    save=first;

    while(save!=NULL)
    {
        printf("%s -> ",save->song);
        save=save->next;
    }

    printf("NULL\n");
}

void main()
{
    int ch;

    while(1)
    {
        printf("\n1.Add Song");
        printf("\n2.Delete Song");
        printf("\n3.Play Next");
        printf("\n4.Play Previous");
        printf("\n5.Display Playlist");
        printf("\n6.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                addSong();
                break;

            case 2:
                deleteSong();
                break;

            case 3:
                playNext();
                break;

            case 4:
                playPrevious();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }
}