//Write a program that:
//Creates int a = 10
//Creates a pointer p pointing to a
//Uses the pointer to increase a by 5
//Prints both a and *p


#include <stdio.h>
int main() 
{
    int a=10;
    int *p=&a;
    *p=15;
    printf("the value of a=%d\n",a);
    printf("the value of pointer=%d\n",*p);
    return 0;
}
