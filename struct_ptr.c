#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p = &s1;
    strcpy(p-> name,"akshaya");
    p-> age = 19;
    p->marks = 99.09;
     printf("%s\n",p->name);
     printf("%d\n",p->age);
     printf("%f",p->marks);
}