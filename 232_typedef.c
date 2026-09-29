// typedef :- its used to change name temparary predefin data type.
#include <stdio.h>
typedef int integer;
typedef char c;
struct student_of_10_class_section_b
{
    int age;
    float per;
};
typedef struct student_of_10_class_section_b s10b;
void main()
{
    integer age;
    c ch;
    s10b s1;
    printf("size of int : %d\n", sizeof(age));
    printf("size of char : %d\n", sizeof(ch));
    printf("size of struct : %d\n", sizeof(s1));
}