//Ask the user for 5 integers, store them in an array, and find their sum using a loop.


#include <stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    printf("enter 5 no");
    for(int i=0;i<=4;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(int j=0;j<=4;j++)
        {
            sum=sum+arr[j];
        }
    printf("%d",sum);
    return 0;
}
1
