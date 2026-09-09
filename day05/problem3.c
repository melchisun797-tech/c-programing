//Write a program to check whether a number is a palindrome.
//A palindrome reads the same forwards and backwards.


#include <stdio.h>
int main() 
{
    int n;
    int n1;
    printf("enter a  palindrome no");
    scanf("%d",&n);
    n1=n;
    int r=0;
    int l;
    while(n>0)
        {
            l=n%10;
            r=(r*10)+l;
            n=n/10;
        }
    if(r==n1)
    {
        printf("the no is palindrome");
    }
    else
    {
        printf("the no is not palindrome");    
    }
    return 0;
}
