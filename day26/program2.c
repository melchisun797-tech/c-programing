//Write a function:
//int secondLargest(int arr[], int n)
//It should find and return the second-largest number in the array.


#include <stdio.h>
int large(int arr[],int n)
{
    int j;
    int lar=0;
    int *p=arr;
    for(int i=0;i<n;i++)
        {
    if(arr[lar]<arr[i])
    {
        lar=i;
    }
        }
    return lar;
}
int selarge(int arr[],int n,int l)
{
    int selar=0;
    if(selar==l)
            {
                selar=1;
            }
    for(int i=0;i<n;i++)
        {
    if((arr[selar]<arr[i])&&i!=l)
    {
        selar=i;
    }
            
        }
    return selar;
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
    int l=large(arr,n);
    int m=selarge(arr,n,l);
    printf("the second largest no is %d",arr[m]);
    return 0;
}4
