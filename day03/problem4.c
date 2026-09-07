//Write a C program that:
//Takes three integers from the user.
//Finds the greatest number.
//Prints the greatest number.


#include <stdio.h>
int main()
{
    int n,m,p;
    
    printf("give 3 nos");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
    
    if(n>=m&&n>=p)
    {
        printf("the greatest no is %d",n);
    }
    else if(m>=n&&m>=p)
    {
        printf("the greatest no is %d",m);
    }
    else if(p>=n&&p>=m)
    {
        printf("the greatest no is %d",p);
    }
    return 0;
}
