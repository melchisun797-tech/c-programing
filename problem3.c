//Write a program that:
//Allocates space for 3 integers using malloc().
//Takes 3 integers as input.
//Uses realloc() to increase the space to 5 integers.
//Takes 2 more integers.
//Prints all 5 integers.
//Uses free().


#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int *p;
    int sum=0;
    p=calloc(3,sizeof(int));
    printf("enter the elements");
    for(int i=0;i<3;i++)
        {
                scanf("%d",&p[i]);
                printf("%d\n",p[i]);
        }
    printf("enter the elements");
    p=realloc(p,5*sizeof(int));
    for(int i=3;i<5;i++)
        {
               scanf("%d",&p[i]);
               printf("%d\n",p[i]);
        }
    free(p);
    return 0;
}
