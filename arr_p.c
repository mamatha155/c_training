#include <stdio.h>
void main()
{
    int arr[4] = {19, 28, 68, 78};
    int*p = arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}