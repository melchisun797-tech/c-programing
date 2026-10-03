//Find the largest element.
//Find the smallest element.
//Return:


#include <stdio.h>
int difference(int la,int sm)
{
    int sum=la-sm;
    return sum;
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
    int l=difference(arr[f1],arr[f2]);
    printf("difference %d",l);
    return 0;
}
