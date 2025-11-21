//write a c program with a function veriadict arguments
#include <stdio.h>
#include <stdarg.h>
void add (int count, ...)
{
    va_list bag;
    va_start (bag,count);
    for(int i=1; i<count; i++)
    {
        int n = va_arg(bag,int);
        result = result+n;
    }
    va_end(bag);
    printf("%d".result);
}
     void main()
     {
        add(19,28,17,27,50,67)
     }