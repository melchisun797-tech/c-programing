//Write a program that:
//Takes n from the user.
//Uses calloc() to allocate n integers.
//Takes n integers.
//Prints the original elements.
//Uses realloc() to increase the array to n + 2 elements.
//Takes 2 additional integers.
//Prints the complete array.
//Uses free().


#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int *p;
    int n;
    printf("enter a no of elements");
    scanf("%d",&n);
    p=calloc(n,sizeof(int));
    printf("enter the elements");
    for(int i=0;i<n;i++)
        {
                scanf("%d",&p[i]);
                printf("%d\n",p[i]);
        }
    printf("enter the elements");
    p=realloc(p,(n+2)*sizeof(int));
    for(int i=n;i<n+2;i++)
        {
               scanf("%d",&p[i]);
        }
    for(int i=0;i<n+2;i++)
        {
               printf("%d\n",p[i]);
        }
    free(p);
    return 0;
}
