//Create a program that:
//Takes n array elements.
//Counts how many are even.
//Counts how many are odd.
//Prints both counts.


#include <stdio.h>
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
             if(arr[i]%2==0)
             {
                 f1++;
             }
            else
             {
                 f2++;
             }
        }
    if(f1>0)
    {
       printf("element that are even %d",f1);
    }
    if(f2>0)
    {
       printf("element that are odd %d",f2);
    }
    return 0;
}
