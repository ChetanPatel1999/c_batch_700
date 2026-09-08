#include <stdio.h>
void fun3();
void fun1()
{
    fun3();
    printf("hi i am fun1\n");
}
void fun2()
{
    fun3();
    printf("hi i am fun2\n");
    fun1();
}
void fun3()
{
    printf("hi i am fun3\n");
}
void main()
{
    printf("start main fun..\n");
    fun1();
    fun2();
    printf("end main fun..");
}