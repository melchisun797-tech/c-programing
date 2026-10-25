//Write a C program that accepts two integers through command-line arguments and prints their sum.


#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        printf("enter 2 arguments");
        return 1;
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("the sum is %d\n",a+b);
    return 0;
}
