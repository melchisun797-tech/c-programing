//Write a C program that defines three functions:
//int add(int a, int b);
//int subtract(int a, int b);
//int multiply(int a, int b);
//Then:
//1. Declare a function pointer that accepts two integers and returns an integer.
//2. Assign it to add() and display the result.
//3. Assign it to subtract() and display the result.
//4. Assign it to multiply() and display the result.


#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
    int squ1=a+b;
    return squ1;
}
int sub(int a,int b)
{
    int squ2=a-b;
    return squ2;
}
int mul(int a,int b)
{
    int squ3=a*b;
    return squ3;
}
int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        printf("enter 2 arguments");
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int (*op)(int,int);
    op=add;
    int sq1=op(a,b);
    printf("%d\n",sq1);
    op=sub;
    int sq2=op(a,b);    
    printf("%d\n",sq2);
    op=mul;
    int sq3=op(a,b);
    printf("%d\n",sq3);
    return 0;
}
