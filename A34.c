#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *int_ptr =(int*)malloc(sizeof(int));
    char *Char_ptr = (char*)malloc(sizeof(char));
    float *flt_ptr = (float*)malloc(sizeof(float));

    *int_ptr = 20;
    *Char_ptr = 'a';
    *flt_ptr = 2.5;

    printf("%d \n",*int_ptr);
    printf("%c \n",*Char_ptr);
    printf("%f \n",*flt_ptr);

    free(int_ptr);
    free(Char_ptr);
    free(flt_ptr);
}