#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* F = NULL;
struct Node* R = NULL;

void enqueue(int x) 
{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));

    if (new == NULL) 
    {
        printf("Queue Overflow\n");
        return;
    }

    new->info = x;
    new->link = NULL;
    
    if (F == NULL) 
    {
        F = new;
        R = new;
    } 
    else 
    {
        R->link = new;
        R = new;
    }
    printf("Enqueue : %d\n", x);
}

void dequeue() 
{
    if (F == NULL) 
    {
        printf("Queue Underflow\n");
        return;
    }

    struct Node* temp = F;
    printf("Dequeue : %d\n", F->info);
    F = F->link;
    
    if (F == NULL) 
    {
        R = NULL;
    }
    free(temp);
}

void display() 
{
    if (F == NULL) 
    {
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = F;
    printf("Queue elements : ");

    while (temp != NULL) 
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL");
}

int main() 
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    
    return 0;
}
