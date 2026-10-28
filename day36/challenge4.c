//Write a C program to sort an array of integers in ascending order (smallest to largest).


#include <stdio.h>
int main() 
{
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
                {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
                }
        }
    for(int i=0;i<n;i++)
        {  
            printf("%d\n",arr[i]);
        }
    return 0;
}
