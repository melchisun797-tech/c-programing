//Count duplicate elements


#include <stdio.h>
int count(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if(arr[i]==arr[j])
            {
                c++;
            }
            }
        }
    return c;
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
    int z=count(arr,n);
    if(z>1)
    {
    printf("the count of duplicate no %d\n",z);
    }
    return 0;
}
