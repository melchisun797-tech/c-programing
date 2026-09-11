//problem4
//Create a function evenOdd() that takes an integer and prints whether it is even or odd.


#include <stdio.h>
void evenorodd(int n)
{
    if(n%2==0)
    {
        printf("it is even");
    }
    else
    {
        printf("it is odd");
    }
}
int main()
    {
        printf("enter a no");
        int s;
        scanf("%d",&s);
        evenorodd(s);
        return 0;
    }

