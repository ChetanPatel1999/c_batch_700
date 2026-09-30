// " a " :- append mode  :- its not delete preveius data
#include <stdio.h>
void main()
{

    FILE *ptr;
    ptr = fopen("C:\\Users\\PC\\Desktop\\sarvagya\\data.txt", "a");
    fprintf(ptr, "hello i am a student\n");
    fprintf(ptr, "this is second stmnt\n");
    fclose(ptr);
}