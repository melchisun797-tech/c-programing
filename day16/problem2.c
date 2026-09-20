//Write a program that:
//Asks the user for n.
//Uses calloc() to allocate n integers.
//Takes n integers as input.
//Finds the sum.
//Prints the sum.
//Uses free().


#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int *p;
    int n;
    int sum=0;
    printf("enter the no of elements");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));
    printf("enter the elements");
    for(int i=0;i<n;i++)
        {
                scanf("%d",&p[i]);
        }
    for(int i=0;i<n;i++)
        {
               sum=p[i]+sum;
        }
    printf("the sum of elements  %d",sum);
    free(p);
    return 0;
}
