//Write a program that:
//Takes a number n.
//Takes another digit d (0–9).
//Counts how many times d appears in n.


#include <stdio.h>
int main() 
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    int r;
    printf("enter a no in the number you gave");
    scanf("%d",&r);
    int l;
    int c=0;
    while(n>0)
        {
            l=n%10;
            if(l==r)
            {
               c++; 
            }
            n=n/10;
        }
    printf("the no of times your no is in= %d",c);
    return 0;
}
