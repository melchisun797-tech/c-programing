//Write a program that prints all command-line arguments.

  
#include <stdio.h>
int main( int argc,char *argv[])
{
    //program prints hello world
    printf("hello world");
    for(int i=0;i<argc;i++)
        {
            printf("%s",argv[i]);
        }
    return 0;
}
