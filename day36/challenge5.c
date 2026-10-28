Write a C program to find the second-largest distinct number in an array.

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
    int slag=0;
    for(int i=0;i<n;i++)
        {
    if(arr[slag]<arr[i]&&arr[i]<arr[n-1])
    {
        slag=i;
    }
        }
    printf("%d",arr[slag]);
    return 0;
}
