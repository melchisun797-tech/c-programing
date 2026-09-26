//Write a program that prints how many arguments the user entered, excluding the program name.


#include <stdio.h>
int main( int argc,char *argv[])
{
    //program prints hello world
    printf("%d",(argc-1));
    return 0;
}
