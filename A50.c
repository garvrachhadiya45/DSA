#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *first = NULL;
struct node *new, *save;

void create() {
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &new->info);
        new->next = NULL;

        if (first == NULL) {
            first = new;
        } else {
            save = first;
            while (save->next != NULL) {
                save = save->next;
            }
            save->next = new;
        }
    }
}

void swapConsecutive() {
    struct node *prev = NULL;
    struct node *curr = first;

    while (curr != NULL && curr->next != NULL) {
        struct node *nextNo = curr->next;

        curr->next = nextNo->next;
        nextNo->next = curr;

        if (prev == NULL) {
            first = nextNo;
        } else {
            prev->next = nextNo;
        }

        prev = curr;
        curr = curr->next;
    }
}

void display() {
    save = first;
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->next;
    }
    printf("NULL\n");
}

void main() {
    create();
    printf("\nOriginal List:\n");
    display();

    swapConsecutive();

    printf("\nList After Swapping Consecutive Nodes:\n");
    display();
}