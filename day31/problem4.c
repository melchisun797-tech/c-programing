//Write a C program using a macro named ODD_EVEN(n).
//Requirements:(can use multiple macro
//1. The macro should determine whether a number is odd or even.
//2. Use the conditional operator ? :.
//3. Read 5 integer from the user.
//. Print Even if divisible by 2, otherwise print Odd.


#include <stdio.h>
#define OE1(a) ((a)%(2)==0)?"EVEN":"ODD"  
#define OE2(b) ((b)%(2)==0)?"EVEN":"ODD"
#define OE3(c) ((c)%(2)==0)?"EVEN":"ODD"
#define OE4(d) ((d)%(2)==0)?"EVEN":"ODD" 
#define OE5(e) ((e)%(2)==0)?"EVEN":"ODD"
int main()
{
int a,b,c,d,e;
printf("enter 5 no");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
printf("%s\n",OE1(a));
printf("%s\n",OE2(b));
printf("%s\n",OE3(c));
printf("%s\n",OE4(d));
printf("%s\n",OE5(e));
return 0;
}
