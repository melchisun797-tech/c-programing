//Write a program that:

//Asks the user for n.
//Dynamically allocates n integers using malloc().
//Takes the n numbers.
//Finds the largest number.
//Prints the largest number.
//Frees the memory.


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
    int largest=*p;
    for(int i=0;i<n;i++)
        {
            if(largest<p[i])
            {
                largest=p[i];
            }
        }
    printf("the largest no is%d",largest);
    free(p);
    return 0;
}
