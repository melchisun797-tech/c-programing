//Read n and the array elements in main().
//Create void sort(int arr[], int n, int *p) to sort the array and count swaps.
//Use a swapped flag to detect whether any swap happened during a pass.
//If no swaps happen during a pass, stop sorting early using break.
//Print the sorted array and total number of swaps in main().


#include <stdio.h>
void sort(int arr[],int n,int *p)
{
    for(int i=0;i<n-1;i++) 
        {
            int swap=0;
            for(int j=0;j<n-1-i;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int tem=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=tem;
                        swap=1;
                        (*p)++;
                    }
                }
            if(swap==0)
                    {
                        break;
                    }
        }
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
    int c=0;
    sort(arr,n,&c);
    for(int i=0;i<n;i++) 
       {
           printf("%d\n",arr[i]);
       }
    printf("%d\n",c);
   return 0;
}
