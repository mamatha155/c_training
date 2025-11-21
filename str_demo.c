#include <stdio.h>
#include <string.h>
void main()
{
    char name [10] = "suhana anjum";
    char new[100] = "hello";
    printf("%c\n,name[7]");
    printf("lenght of string is %d\n",strlen(name));
    strcat(new,name);
    printf("%s\n",new);
}