//Create a program that:
//Takes n numbers into an array.
//Uses a function:
//int largest(int *p, int n)
//to find the largest number.
//Uses pointer arithmetic inside the function
//Returns the largest number.
//Prints it in main().


#include <stdio.h>
int lar(int *p,int n)
{
    int la=0;
    for(int i=0;i<n;i++)
        {
            if(p[la]<p[i])
            {
                la=i;
            }
        }
    return p[la];
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
    int l=lar(arr,n);
    printf("the largest of array elments is %d",l);
    return 0;
}
