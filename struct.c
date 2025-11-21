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
    s1.age = 10;
    s1.marks = 89.6;
    strcpy(s1.name, "joey");

    struct student s2;
    s2.age = 20;
    s2.marks = 90.6;
    strcpy(s2.name,"raj");

    struct student s3 = {"popoye",17,30,25};

    printf("%s",s1.name);
    printf("%d",s1.age);

}