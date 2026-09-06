//problem 4
//Ask the user for a three-digit integer:
//Your program should output:
//Hundreds digit = 5
//Tens digit = 8
//Ones digit = 3


#include <stdio.h>
int main() 
{
    int n;
    printf("enter a 3 digit no");
    scanf("%d",&n);
    int f1=n%10;
    n=n/10;
    int f2=n%10;
    n=n/10;
    int f3=n%10;
    printf("the onces digits is %d\n",f1);
    printf("the tens digits is %d\n",f2);
    printf("the hundreds digits is %d\n",f3);
    return 0;
}
