//Now modify your program to count how many times a number appears.


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
             }
        }
    if(f>0)
    {
       printf("search element found %d times",f);
    }
    else if(f==0)
    {
       printf("element not found");
    }
    return 0;
}
