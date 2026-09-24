#include <stdio.h>

struct Student
{
    int roll_no;
    char name[30];
    char branch[20];
    int batch_no;
};

int main()
{
    struct Student s;
    struct Student *p = &s;

    printf("Enter Roll No: ");
    scanf("%d", &p->roll_no);

    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Branch: ");
    scanf("%s", p->branch);

    printf("Enter Batch No: ");
    scanf("%d", &p->batch_no);

    printf("\nStudent Details\n");

    printf("Roll No: %d\n", p->roll_no);
    printf("Name: %s\n", p->name);
    printf("Branch: %s\n", p->branch);
    printf("Batch No: %d\n", p->batch_no);

    return 0;
}