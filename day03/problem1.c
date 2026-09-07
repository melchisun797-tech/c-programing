//Write a C program that:
//Takes an integer from the user.
//Checks whether the number is positive or negative.
//Prints the appropriate result.


include <stdio.h>
int main()
{
    int n;
    printf("give a integer");
    scanf("%d",&n);
    if(n>0)
    {
        printf("the no is positive");
    }
    else if (n<0)
    {
        printf("the no is negative");
    }
    return 0;
}
#
