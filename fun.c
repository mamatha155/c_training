//write a c functionwhich will accepts and arr,int's size n and return the diffence between two of them 
#include <stdio.h>
#include <stdlib.h>
   int sub_arr (int arr[],int n)
    {
        int sub = arr[0]-arr[n-1];
        return abs(sub);
    }
void main()
{
    int arr[]={14,18,12};
    int size=3;
    printf("%d",arr);
}