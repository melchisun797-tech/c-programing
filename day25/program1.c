//Write a C program that:
//Takes an integer n.
//Checks whether it is positive, negative, or zero.
//If it is positive, check whether it is even or odd.
//Prints the appropriate result.


#include <stdio.h>

int main() 
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    if(n>0)
    {
        if(n%2==0)
        {
            printf("the no is even");
        }
        else
        {
            printf("the no is odd");
        }
        printf("the no is positive");
    }
    else if(n<0)
    {
        printf("the no is negative");
    }
    if(n==0)
    {
        printf("the no is zero");
    }
    
    return 0;
}
