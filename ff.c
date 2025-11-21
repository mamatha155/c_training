//write a c function which accept 3 perameters l,b,h and returns volume of the cube
#include <stdio.h>
int volume (int l,int b,int h)
{
     int volume = l*b*h;
     return volume;
}
void main()
{
    int l=19;
    int b=09;
    int h=27;
    printf("%d",volume(l,b,h));