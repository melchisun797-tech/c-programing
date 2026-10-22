//Write a C program that uses macros to calculate the area of a rectangle.
//Requirements:
//1. Define a macro named AREA(length, breadth).
//2. Read the length and breadth from the user.
//3. Calculate the area using the macro.
//4. Print the result.
//5. Use #include <stdio.h>.

#include <stdio.h>
#define AREA(x,y) ((x)*(y))
int main() 
{
    int l,b;
    printf("enter length and breath");
    scanf("%d%d",&l,&b);
    printf("%d\n",AREA(l,b));
    return 0;
}
