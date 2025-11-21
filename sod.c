#include <stdio.h>
int sum_digits (int n)
{
    int digits, result = 0;
    while (n!=0)
    {
        digits = n%10;
        result = result + digits;
        n=n/10;
    }
    return result;
}
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("%d",sum_digits(n));
}