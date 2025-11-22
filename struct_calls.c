#include <stdio.h>
struct score
{
    float marks;
    int rank;
};

void edit (struct score s1)
{
    printf("before change in fn : %f\n",s1.marks);
    s1.marks = 28.9;
    printf("after change in fn : %f\n',s1.marks");

}
void main ()
{
    struct score s1 = { 19.8,4};
    edit (s1);
    printf("after change in main %f\n",s1.marks);
}