//Write a program that:
//Creates an integer variable a.
//Stores 10 in it.
//Creates a pointer p that points to a.
//Prints:
//The value of a
//The value using *p


#include <stdio.h>
int main() 
{
    int a=10;
    int *p=&a;
    printf("the value of a=%d\n",a);
    printf("the value of pointer=%d\n",*p);
    return 0;
}
