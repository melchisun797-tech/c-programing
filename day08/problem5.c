//Take 5 integers into an array.
//Ask the user for another number to search.
//Check whether that number exists in the array.
//Print whether it was found.


#include <stdio.h>
int main()
{
    int arr[5];
    int f=0;
    printf("enter 5 no");  
    for(int i=0;i<=4;i++)
        {
            scanf("%d",&arr[i]);
        }
    int se;
    printf("a no to search");
    scanf("%d",&se);
    for(int j=0;j<=4;j++)
        {
            if(arr[j]==se)
            {
                f++;
            }
        }
    if(f>0)
       {
    printf("search element found");
       }
    else
    {
    printf("search element not found");
    }
            
}
