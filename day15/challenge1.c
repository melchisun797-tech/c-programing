//Write a program that:
//Takes n from the user.
//Dynamically allocates n integers.
//Takes all n numbers.
//Calculates the sum.
//Calculates the average.
//Prints both.
//Uses free().


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
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
       for(int i=0;i<n;i++)
           {
               sum=sum+p[i];
               avg=(float)sum/n;
           }
    printf("the sum is %d\n",sum);
    printf("the avg is %.2f\n",avg);
    free(p);
    return 0;
}5
