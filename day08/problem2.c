//Create an array that can hold 5 integers.
//Ask the user to enter 5 numbers, then print all 5 numbers.

#include <stdio.h>
int main() 
{
    int arr[5];
    printf("enter 5 no");
    for(int i=0;i<=4;i++)
        {
            scanf("%d",&arr[i]);      
        }
    for(int j=0;j<=4;j++) 
        {
            printf("%d\n",arr[j]); 
        }
    return 0;
}
