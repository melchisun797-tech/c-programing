//Write a program that:
//Takes n integers into an array.
//Creates a function:
//int smallest(int arr[], int n)
//The function should find and return the smallest number.
//Print the result in main().


#include <stdio.h>
int small(int arr[],int n)
{
    int sma=0;
    for(int i=0;i<n;i++)
        {
    if(arr[sma]>arr[i])
    {
        sma=i;
    }
        }
    return arr[sma];
}
int main() 
{
    int n;
    printf("enter no of array elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elemnts");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    int l=small(arr,n);
    printf("the smallest no is %d",l);
    return 0;
}
