#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int F = -1;
int R = -1;

void insert() 
{
    int x;

    if ((R+1) % MAX == F) 
    {
        printf("Queue Overflow\n");
        return;
    }
    
    printf("Enter element : ");
    scanf("%d", &x);
    
    if (F==-1) 
        F = 0;
    
    R = (R + 1) % MAX;
    queue[R] = x;

    printf("Insert : %d\n", x);
}

void delete() 
{
    if (F == -1) 
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[F]);

    if (F == R) 
    {
        F = -1;
        R = -1;
    } 
    else 
    {
        F = (F+1) % MAX;
    }
}

void display() 
{
    if (F==-1) 
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements : ");

    int i = F;
    while (1==1) 
    {
        printf("%d ", queue[i]);
        if (i == R) 
            break;
        
        i = (i + 1) % MAX;
    }
}

int main() 
{
    int c;

    while (1==1) 
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter c: ");
        scanf("%d", &c);

        switch (c) 
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid\n");
        }
    }
    return 0;
}