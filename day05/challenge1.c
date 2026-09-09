//Write a program that takes an integer and finds the largest digit in it.


#include <stdio.h>
int main() 
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    int l;
    int gno=0;
    while(n>0)
        {
            l=n%10;
            if(l>gno)
            {
                gno=l;
            }
            n=n/10;
        }
    printf("the greatest no= %d",gno);
    return 0;
}
