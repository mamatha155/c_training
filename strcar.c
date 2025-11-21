#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    float speed;
    float price;
};
void main()
{
    int n;
    printf("enter the variable of car");
    scanf("%d",&n);
    struct  car c[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the name of the  car:");
        scanf("%s",c[i].name);

        printf("enter speed of the car:");
            scanf("%f",&c[i].speed);

            printf("enter  price the car:");
            scanf("%f",&c[i].price);
    }
}
