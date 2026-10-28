//Write a C program that manages students' marks using dynamic memory allocation and user-defined functions.
//Requirements
//1. Ask the user to enter the number of students.
//2. Allocate an integer array using malloc().
//3. Read each student's marks, from 0 to 100.
//4. Create a function called calculateAverage() to calculate the average marks.
//5. Create a function called findHighest() to find the highest mark.
//6. Display the average and highest mark.
//7. Release the allocated memory using free().


#include <stdio.h>
#include <stdlib.h>
int calavg(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
    int a=sum/n;
    return a;
}
int higmark(int arr[],int n)
{
    int lag=0;
    for(int i=0;i<n;i++)
        {
            if(arr[lag]<arr[i])
            {
                lag=i;
            }
        }
    return arr[lag];
}
int main() 
{
    int n;
    printf("enter no of elements\n");
    scanf("%d",&n);  
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("NO MEMORY");
        return 1;
    }
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    int x=calavg(arr,n);
    int y=higmark(arr,n);
    printf("the average mark %d\n",x);
    printf("the highest mark %d\n",y);
    free(arr);
    return 0;
}
