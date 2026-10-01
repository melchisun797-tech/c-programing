//Write a C program that:
//Ask the user for n.
//Create an integer array of n elements.
//Input all elements.
//Create a function:
//int sum(int *p, int n)
//→ Return the sum using pointer arithmetic.
//Create a function:
//int largest(int *p, int n)
//→ Return the largest element using pointer arithmetic.
//Create a function:
//void reverse(int *p, int n)
//→ Reverse the array in place using pointer arithmetic.
//No second array.
//In main(), print:
//Sum
//Largest element
//Reversed array


#include <stdio.h>
void reverse(int *p,int n)
{
    for(int i=0;i<n/2;i++)
        {
            int tem=p[i];
            p[i]=p[(n-1)-i];
            p[(n-1)-i]=tem;
        }
}
int large(int arr[],int n)
{
    int lar=0;
    for(int i=0;i<n;i++)
        {
            if(arr[lar]<arr[i])
            {
                lar=i;
            }
        }
    return arr[lar];
}
int sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        {
                s=s+arr[i];
        }
    return s;
}
int main()
{
    int n;
    printf("enter no of array elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    reverse(arr,n);
    int l=large(arr,n);
    int m=sum(arr,n);
    for(int i=0;i<n;i++)
        {
              printf(" %d\n",arr[i]);
        }
    printf("the largest no is %d\n",l);
    printf("the sum of array is %d\n",m);
    return 0;
}
