//Write a C program using a macro named ODD_EVEN(n).
//Requirements:
//1. The macro should determine whether a number is odd or even.
//2. Use the conditional operator ? :.
//3. Read an integer from the user.
//4. Print Even if divisible by 2, otherwise print Odd.


#include <stdio.h>
#define OE(a) ((a)%(2)==0)?"EVEN":"ODD"
int main()
{
int a;
printf("enter 1 no");
scanf("%d",&a);
printf("%s\n",OE(a));
return 0;
}
