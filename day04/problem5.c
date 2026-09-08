//Find the factorial of a number.
//Ask the user for n and calculate:
//n! = 1 × 2 × 3 × ... × n


#include <stdio.h>
int main() 
{
    int n;
    printf("give me a no");
    scanf("%d",&n);
    int sum=1;
    int i=1;
    while(n>0)
        {
            sum=sum*i;
            i++;
            n--;
        }
    printf("sum= %d\n",sum);
    return 0;
}
