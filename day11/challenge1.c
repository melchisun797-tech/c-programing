//Write a program that:
//Creates a = 10
//Creates b = 20
//Creates pointer p pointing to a
//Uses p to change a to 50
//Makes p point to b
//Uses p to change b to 100
//Prints both a and b


#include <stdio.h>
int main() 
{
    int a=10;
    int *p=&a;
    *p=50;
    printf("the value of pointer=%d\n",*p);
    int b=20;
    p=&b;
    *p=100;
    printf("the value of pointer=%d\n",*p);
    return 0;
}
