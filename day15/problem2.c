//Write a program that:
//Asks the user for n.
//Uses malloc() to allocate space for n integers.
//Takes n integers as input.
//Prints all n integers.
//Uses free() at the end.


#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p;
    int n;
    printf("tell me the no of elements in array");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("enter elements of an array");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
      
    for(int i=0;i<n;i++)
        {
                printf("%d\n",p[i]);
        }
    free(p);
    return 0;
}5
