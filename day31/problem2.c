//Write a program that:
//1. Defines a macro named STUDENT_MODE.
//2. Uses #ifdef STUDENT_MODE to print Student mode enabled.
//3. Uses #else to print Student mode disabled.
//4. Prints Program started regardless of the mode.


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
