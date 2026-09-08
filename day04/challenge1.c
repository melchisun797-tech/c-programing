//Write a C program that:
//Takes an integer n from the user.
//Uses a while loop.
//Counts how many digits are in the number.
//Prints the number of digits.


#include <stdio.h>
int main() 
{
    int n;
    printf("give me a no");
    scanf("%d",&n);
    int i=0;
    while(n>0)
        {
            n=n/10;
            i++;
            
        }
    printf("count= %d\n",i);
    return 0;
}
