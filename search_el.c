#include <stdio.h>
int search (int arr[],int key, int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[7] = { 34,25,58,78,98,19,17}
     int key;
    printf("what are you searching? ");
    scanf("%d",&key);
    printf("%d", (arr,key));
}