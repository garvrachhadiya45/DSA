#include <stdio.h>

#define MAX 5

struct Priority 
{
    int info;
    int p;
};

struct Priority pr[MAX];
int size = 0;

void enqueue(int info, int p) 
{
    if (size == MAX) 
    {
        printf("Queue Overflow\n");
        return;
    }
    
    pr[size].info = info;
    pr[size].p = p;
    size++;
    printf("Enqueue : info = %d, Priority = %d\n", info, p);
}

void dequeue() 
{
    if (size == 0) 
    {
        printf("Queue Underflow\n");
        return;
    }
    
    int high = pr[0].p;
    int index = 0;
    
    for (int i = 1; i < size; i++) 
    {
        if (pr[i].p < high) 
        {
            high = pr[i].p;
            index = i;
        }
    }

    printf("Dequeued: info = %d, Priority = %d\n", pr[index].info, pr[index].p);
    
    for (int i = index; i < size - 1; i++) 
    {
        pr[i] = pr[i + 1];
    }
    size--;
}

void display() 
{
    if (size == 0) 
    {
        printf("Queue is empty!\n");
        return;
    }
    
    printf("Priority Queue :\n");

    for (int i = 0; i < size; i++) 
    {
        printf("info : %d [Priority : %d]\n", pr[i].info, pr[i].p);
    }
}

int main() 
{
    enqueue(100,3);
    enqueue(200,1);
    enqueue(300,2);
    display();
    dequeue();
    dequeue();
    display();
    
    return 0;
}
