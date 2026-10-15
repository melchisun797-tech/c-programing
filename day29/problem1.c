//Bubble Sort using a function


#include <stdio.h>
void arra(int arr[],int n)
{
    for(int i=0;i<n-1-i;i++)
        {
            for(int j=0;j<n-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int tem=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=tem;
                    }
                }
        }
}
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
    arra(arr,n);
        for(int i=0;i<n;i++)
            {
                printf("%d\n",arr[i]);
            }
    return 0;
}
