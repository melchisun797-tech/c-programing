Write a program that takes a number and prints it in reverse.


#include <stdio.h>
int main() 
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    int l;
    int reverse=0;
    while(n>0)
        {
            l=n%10;
            reverse=(reverse*10)+l;
            n=n/10;
        }
    printf("the addition of the no is %d",reverse);
    return 0;
}
