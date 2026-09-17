//Create this array:
//int arr[3] = {10, 20, 30};
//Then:
//Create an integer pointer p
//Make p point to the first element of arr
//Print the first element using *p


#include <stdio.h>
int main() 
{
    int a[3];
    printf("enter array elements");
    for(int i=0;i<=2;i++)
        {
            scanf("%d",&a[i]);
        }
    int *p=a;
    printf("the pointer is %d",*p);
    return 0;
}
