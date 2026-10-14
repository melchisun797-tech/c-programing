//Bubble Sort in Descending Order

#include <stdio.h>
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
    for(int i=0;i<n-1;i++) 
        {
            for(int j=0;j<n-1-i;j++)
                {
                    if(arr[j]<arr[j+1])
                    {
                        int tem=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=tem;
                    }
                }
        }
   for(int i=0;i<n;i++) 
       {
           printf("%d\n",arr[i]);
       }
   return 0;
}
