//Write a function:
//void reverse(int *p, int n)
//It should reverse the array using pointers.


#include <stdio.h>
void reverse(int *p,int n)
{
    for(int i=0;i<n/2;i++)
        {
            int tem=p[i];
            p[i]=p[(n-1)-i];
            p[(n-1)-i]=tem;
        }
     for(int i=0;i<n;i++)
        {
              printf(" %d",p[i]);
        }
}
int main()
{
    int n;
    printf("enter no of array elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    reverse(arr,n);
}
