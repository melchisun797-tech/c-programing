//Write a program that takes two integers and prints:
//AND
//OR
//XOR


#include <stdio.h>
int main() 
{
    int n,m;
    printf("the 2 no");
    scanf("%d%d",&n,&m);
    printf("or=%d",n|m);
    printf("and=%d",n&m);
    printf("xor=%d",n^m);
    return 0;
}
