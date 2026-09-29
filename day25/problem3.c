//Write a program that:
//Creates an integer array of 5 elements.
//Takes 5 numbers from the user.
//Creates a function:
//int largest(int a[], int n)
//The function finds and returns the largest element.
//Print the largest number in main().


#include <stdio.h>
int lar(int arr[],int n)
{
    int larg=0;
    for(int i=0;i<n;i++)
        {
    if(arr[i]>arr[larg])
    {
        larg=i;
    }
        }
    return larg;
}
int main()
{
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    int l=lar(arr,n);
    printf("the largest no is %d",arr[l]);
}
