//Write a program that:
//Creates int a = 10
//Creates int b = 20
//Creates pointer p pointing to a
//Prints *p
//Makes p point to b
//Prints *p again


#include <stdio.h>
int main() 
{
    int a=10;
    int *p=&a;
    printf("the value of pointer=%d\n",*p);
    int b=20;
    p=&b;
    printf("the value of pointer=%d\n",*p);
    return 0;
}
