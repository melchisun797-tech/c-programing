//Take 5 integers into an array and find the largest number.


#include <stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    printf("enter 5 no");
    int largest;   
    for(int i=0;i<=4;i++)
        {
            scanf("%d",&arr[i]);
            largest=arr[0];
        }
    for(int j=0;j<=4;j++)
        {
            if(largest>arr[j])
            {
               largest=largest;
            }
            else
            {
                largest=arr[j];
            }
        }
    printf("%d",largest);
    return 0;
}
