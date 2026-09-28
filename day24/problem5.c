Write a program that:

Takes an integer n
Takes a shift amount m
Calculates n << m
Prints the result

#include <stdio.h>
int main() 
{
    int n,m;
    printf("the 2 no");
    scanf("%d%d",&n,&m);
    printf("left shift=%d",n<<m);
    return 0;
}
