// fopen()
// fprintf() :- we canm write data inside file
#include <stdio.h>
void main()
{
    // fisrt create file type pointer
    FILE *ptr;
    // fopen create a file and return address/location of file
    ptr = fopen("C:\\Users\\PC\\Desktop\\sarvagya\\data.txt", "w");
    // fprint write data inside file
    fprintf(ptr, "hello i am a student\n");
    fprintf(ptr, "this is second stmnt\n");
    // its close file
    fclose(ptr);
}