//Write a C program to find the sum of all digits of a number.


#include <stdio.h>
int main() 
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    int l;
    int sum=0;
    while(n>0)
        {
            l=n%10;
            sum=sum+l;
            n=n/10;
        }
    printf("the addition of the no is %d",sum);
    return 0;
}
