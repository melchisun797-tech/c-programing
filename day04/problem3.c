//Write a program that takes an integer n from the user and prints all numbers from 1 to n.


#include <stdio.h>
int main() 
{
    int n;
    printf("give me a no");
    scanf("%d",&n);
    int n1=1;
    while(n>0)
        {
            printf("%d\n",n1);
            n1++;
            n--;
        }
    return 0;
}
