Write a C program that reads an array of integers and prints only the unique elements, removing duplicates.


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
            int f=0;
    for(int k=0;k<i;k++)
        {
            if(arr[k]==arr[i])
            {
                f=1;
                break;
            }
        }
    if(f==1)
       {
            continue;       
       }
            printf("%d ",arr[i]);
        }    
    return 0;
}
