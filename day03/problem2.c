//Write a program that:
//Takes an integer from the user.
//Checks whether it is even or odd.
//Prints the result.


#include <stdio.h>
int main()
{
    int n;
    printf("give me an integer");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even no");
    }
    else
    {
        printf("odd no");    
    }
    return 0;
}
