//Write a program that:
//Creates an int *p.
//Uses malloc() to allocate space for 5 integers.
//Takes 5 integers from the user.
//Prints all 5 integers.
//Access the allocated memory using p[i].


#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p;
    p=malloc(5*sizeof(int));
    printf("enter elements of an array");
    for(int i=0;i<5;i++)
        {
            scanf("%d",&p[i]);
        }
      
    for(int i=0;i<5;i++)
        {
                printf("%d\n",p[i]);
        }
    return 0;
}
