#include <stdio.h>
#include <stdlib.h>

struct PolyNode {
    int coeff;
    int power;
    struct PolyNode *next;
};

struct PolyNode* createNode(int c, int p) {
    struct PolyNode *new = (struct PolyNode *)malloc(sizeof(struct PolyNode));
    new->coeff = c;
    new->power = p;
    new->next = NULL;
    return new;
}

void insertPoly(struct PolyNode **head, int c, int p) {
    struct PolyNode *new = createNode(c, p);
    if (*head == NULL) {
        *head = new;
    } else {
        struct PolyNode *save = *head;
        while (save->next != NULL) {
            save = save->next;
        }
        save->next = new;
    }
}

struct PolyNode* addPolynomials(struct PolyNode *p1, struct PolyNode *p2) {
    struct PolyNode *res = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->power > p2->power) {
            insertPoly(&res, p1->coeff, p1->power);
            p1 = p1->next;
        } else if (p1->power < p2->power) {
            insertPoly(&res, p2->coeff, p2->power);
            p2 = p2->next;
        } else {
            insertPoly(&res, p1->coeff + p2->coeff, p1->power);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        insertPoly(&res, p1->coeff, p1->power);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insertPoly(&res, p2->coeff, p2->power);
        p2 = p2->next;
    }

    return res;
}

void displayPoly(struct PolyNode *head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->power);
        head = head->next;
        if (head != NULL) printf(" + ");
    }
    printf("\n");
}

void main() {
    struct PolyNode *p1 = NULL;
    struct PolyNode *p2 = NULL;
    struct PolyNode *res = NULL;

    insertPoly(&p1, 5, 2);
    insertPoly(&p1, 4, 1);

    insertPoly(&p2, 2, 2);
    insertPoly(&p2, 3, 0);

    printf("Polynomial 1: ");
    displayPoly(p1);

    printf("Polynomial 2: ");
    displayPoly(p2);

    res = addPolynomials(p1, p2);

    printf("Sum: ");
    displayPoly(res);
}