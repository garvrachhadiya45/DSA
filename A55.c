#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node* lptr;
    struct node* rptr;
};

void main()
{
    struct node* s1;
    struct node* s2;
    struct node* s3;
    struct node* s4;
    struct node* s5;
    struct node* s6;
    struct node* s7;

    s1 = (struct node*)malloc(sizeof(struct node));
    
    s2 = (struct node*)malloc(sizeof(struct node));
    
    s3 = (struct node*)malloc(sizeof(struct node));
    
    s4 = (struct node*)malloc(sizeof(struct node));
    
    s5 = (struct node*)malloc(sizeof(struct node));
    
    s6 = (struct node*)malloc(sizeof(struct node));
    
    s7 = (struct node*)malloc(sizeof(struct node));

    s1->lptr = NULL;
    s1->rptr = s2;
    s1->info = 1;
    
    s2->lptr = s1;
    s2->rptr = s3;
    s2->info = 2;
    
    s3->lptr = s2;
    s3->rptr = s4;
    s3->info = 3;
    
    s4->lptr = s3;
    s4->rptr = s5;
    s4->info = 4;
    
    s5->lptr = s4;
    s5->rptr = s6;
    s5->info = 5;
    
    s6->lptr = s5;
    s6->rptr = s7;
    s6->info = 6;
    
    s7->lptr = s6;
    s7->rptr = NULL;
    s7->info = 7;
    
    struct node* save = s1;
    while(save != NULL)
    {
        printf("%d  ->  ",save->info);
        save = save->rptr;
    }
    struct node* prev;
    struct node* next;

    
    prev = NULL;

    save = s1;

    next = save->rptr;
    int i = 1;

    while(save!=NULL)
    {
        // if((i++%2==0) && next==NULL)
        // {
        //     prev->rptr = next;
        //     save->lptr = NULL;
        //     break;
        // }

        // if(prev->rptr == NULL)
        // {
        //     break;
        // }

        // prev->rptr = next;
        // next->lptr = prev;
        // save->lptr = NULL;
        // save->rptr = NULL;
        // free(save);
    
        // prev = next;
        // save = prev->rptr;
        // next = save->rptr;

        if(i%2==0){
            printf("hei");
            prev->rptr = next;
            next->lptr = prev;
            free(save);
            prev= next ;
            save = prev->rptr;
            next = save->rptr;
            i++;
        }
        else{
            printf("www ");
            prev= save;
            save = next;
            next = next->rptr;
        }
    }

    struct node * temp = s1;
    printf("hii");
    while(temp != NULL)
    {
        printf("%d  ->  ",temp->info);
        temp = temp->rptr;
    }
    printf("hello");
}