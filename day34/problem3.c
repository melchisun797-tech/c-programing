//Write a C program that:
//1. Creates a function called square() that accepts an integer.
//2. Returns the square of that integer.
//3. Uses a function pointer to call square().
//4. Prints the result.


#include <stdio.h>
#include <stdlib.h>
int square(int b)
{
    int squ=b*b;
    return squ;
}
int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        printf("enter 1 arguments");
        return 1;
    }
    int a = atoi(argv[1]);
    int (*ptr)(int);
    ptr=square;
    int sq=ptr(a);
    printf("%d\n",sq);
    return 0;
}
