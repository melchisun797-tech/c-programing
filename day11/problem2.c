//Write a program that:
//Creates int a = 10
//Creates pointer p pointing to a
//Changes the value of a to 20 using the pointer
//Prints a


#include <stdio.h>
int main() 
{
    int a=10;
    int *p=&a;
    *p=20;
    printf("the value of a=%d\n",a);
    return 0;
}
