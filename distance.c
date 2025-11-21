#include <stdio.h>
#include <math.h>
void main()
{
    int x1,y1,x2,y2 ;
    printf("enter the values x1,y1:");
    scanf("%d%d",&x1,&y1);
    printf("enter the values x2,y2:");
    scanf("%d%d",&x2, &y2);
    int d1=x2-x1;
    int d2=y2-y1;
    double dist=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("distance is %f",dist);
}