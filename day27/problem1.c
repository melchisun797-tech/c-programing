//Linear Search
//Input:  10 25 7 40 15
//Search: 40
//Output: Element found at index 3


#include <stdio.h>
int main() 
{
    int n;
    int f=0;
    printf("enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
        {
             scanf("%d",&arr[i]);
        }
    int s;
    printf("enter the element to find");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
        {
             if(arr[i]==s)
             {
                 f++;
                 printf("search element found at index %d",i);
             }
        }
    if(f==0)
    {
       printf("element not found");
    }
    return 0;
}
