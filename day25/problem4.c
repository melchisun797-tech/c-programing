//Create a function:
//int sum(int *p, int n)
//The function should:
//Receive the address of the first array element through p.
//Use a loop to calculate the sum of all elements.
//Return the sum.
//In main():
//Create an array of 5 integers.
//Take the 5 values from the user.
//Call:
//int result = sum(arr, 5);
//Print the result.


#include <stdio.h>
int sum(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        {
            sum=sum+(p[i]);
        }
    return sum;
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
    int l=sum(arr,n);
    printf("the sum of array elments is %d",l);
    return 0;
}
