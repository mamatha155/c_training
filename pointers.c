#include <stdio.h>
struct score
{
    float marks;
    int rank;
};
void edit(struct score *s1)
{
    printf("before change in fn:%f\n",s1->marks);
    s1-> marks = 66.9;
    printf("after change in fn :%f\n",s1->marks);

}
void main()
{
    struct score s1 ={12,23,45};
    edit(&s1);
    printf("after change in main %f\n",s1.marks);
}