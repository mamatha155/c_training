#include <stdio.h>
void main()
{
    int result =0;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    {
        for( int i=1; i<5; i++)
        result=result + i;
    }
    printf("sum is %d",result);
}