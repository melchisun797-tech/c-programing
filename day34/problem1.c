//Write a program that prints the name provided through the command line.
  
#include <stdio.h>
int main(int argc,char *argv[])
{
    printf("the no of arguments %d\n",argc);
    for(int i=0;i<argc;i++)
        {
            printf("%s\n",argv[i]);
        }
    return 0;
}
