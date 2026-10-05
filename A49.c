#include <stdio.h>
#include <stdlib.h>

struct Node{

    int info;

    struct Node* link;
};

int gcd(int a, int b)
{
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    if(b==0)
    return a; 

    return gcd(b , a%b);
}

void main(){

    struct Node* s1;
    struct Node* s2;
    struct Node* s3;
    struct Node* s4;

    s1 = (struct Node*) malloc (sizeof(struct Node));
    s2 = (struct Node*) malloc (sizeof(struct Node));
    s3 = (struct Node*) malloc (sizeof(struct Node));
    s4 = (struct Node*) malloc (sizeof(struct Node));
                                                    

    s1->info = 18;
    s2->info = 6;
    s3->info = 10;
    s4->info = 3;
    
    s1->link=s2;
    s2->link=s3;
    s3->link=s4;
    s4->link=NULL;

    struct Node* pre = s1; 
    struct Node* next = s1->link;
    struct Node* Save = s1; 
    
    int c=0;

    while(Save != NULL)
    {
        Save = Save->link;
        c++;
    }

    for(int i=0 ; i<c-1; i++)
    {
        struct Node*new;

        new = (struct Node*) malloc (sizeof(struct Node));

        new->info = gcd(pre->info , next->info);
        
        pre->link = new;
        new->link = next;

        pre=next;
        next = next->link;
    }

    Save = s1;

    while(Save != NULL)
    {
        printf("%d -> ",Save->info);
        Save = Save->link;
    }
     printf(" NULL");
}