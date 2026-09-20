//Write a program that:
//Creates an int *p.
//Uses calloc() to allocate space for 5 integers.
//Prints all 5 elements without taking input.
//Uses free(p).


#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int *p;
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        {
                printf("%d",p[i]);
        }
    free(p);
    return 0;
}
