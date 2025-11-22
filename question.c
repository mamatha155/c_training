//write a c program which add 3 numbers by call by reference
#include <stdio.h>
void add(int *a, int *b, int *c)
{
int add= (*a) * (*b) * (*c);
printf ("%d",add);
}
void main()
{
    int a= 20;
    int b=19;
    int c=28;
    printf(&a,&b,&c);
}

