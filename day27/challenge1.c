//Write a program that:
//Takes n array elements.
//Finds the largest number.
//Finds the smallest number.
//Calculates the sum.
//Asks the user for a number to search.
//Tells how many times that number occurs.
//Reverses the array.
//Uses separate functions for these operations.


#include <stdio.h>
int sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        {
            s=s+arr[i];
        }
    return s;
}
void search(int arr[],int n)
{
    int f=0;
    int se;
    printf("enter search element\n");
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
              f++;
        }
    }
    if(f>0)
    {
        printf("search elements found\n");
        printf("search  element found %d times\n",f);
    }
    else
    {
        printf("search element not found\n");
    }
}
void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[(n-1)-i];
            arr[(n-1)-i]=temp;
        }
}
int main() 
{
    int n;
    int f1=0;
    int f2=0;
    printf("enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
        {
             scanf("%d",&arr[i]);
        }
    for(int i=0;i<n;i++)
        {
             if(arr[f1]<arr[i])
             {
                 f1=i;
             }
        }
    for(int i=0;i<n;i++)
        {
            if(arr[f2]>arr[i])
            {
                f2=i;
            }
        }
    int l=sum(arr,n);
    search(arr,n);
    reverse(arr,n);
    printf("sum %d\n",l);
    for(int i=0;i<n;i++)
        {
            printf(" %d",arr[i]);
        }
    return 0;
}
