//Write a C program using a macro named ODD_EVEN(n).
//Requirements:
//1. The macro should determine whether a number is odd or even.
//2. Use the conditional operator ? :.
//3. Read an integer from the user.
//4. Print Even if divisible by 2, otherwise print Odd.


#include <stdio.h>
#define OE1(a) ((a)%(2)==0)?"EVEN":"ODD"  
int main()
{
int a[5];
printf("enter 5 array elements");
for(int i=0;i<=4;i++)
{
scanf("%d",&a[i]);
printf("%s\n",OE1(a[i]));
}
return 0;
}
