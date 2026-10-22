//Write a C program that uses a macro to find the maximum of three integers.
//Requirements:
//1. Define a macro named MAX3(a,b,c).
//2. Read three integers from the user.
//3. Use the macro to determine the largest number.
//4. Print the result.

#include <stdio.h>
#define MAX(a,b) ((a)>(b))?a:b
#define MAX3(n,c) ((n)>(c))?n:c
int main()
{
int a,b,c;
printf("enter 3 no");
scanf("%d%d%d",&a,&b,&c);
int n=MAX(a,b);
printf("max=%d\n",MAX3(n,c));
return 0;
}
