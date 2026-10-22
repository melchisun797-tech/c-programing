//Write a C program that uses a macro to find the maximum of three integers.
//Requirements:
//1. Define a macro named MAX3(a,b,c).
//2. Read three integers from the user.
//3. Use the macro to determine the largest number.
//4. Print the result.

#include <stdio.h>
#define STUDENT_MODE
int main()
{
#ifdef STUDENT_MODE
printf("student mode activated");
#else
printf("student mode deactivated");
#endif
printf("program started");
return 0;
}
