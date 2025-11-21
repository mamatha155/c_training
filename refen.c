//write a function  which will multiple three numbers and we call it references
#include <stdio.h>
void prod (int *a, int *b, int *c)
{
    int product =  (*a) * (*b) * (*c);
    printf("%d",product);
}
void main()
{
    int a = 19;
    int b = 28;
    int c = 17;
    prod(&a, &b, &c);
}