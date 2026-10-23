//Create a program using three files:
//- student.h — declare the functions and add a header guard.
//- student.c — implement the functions.
//- main.c — get input, call the functions, and display results.
//Your program must:
//1. Accept marks for three subjects.
//2. Use int total_marks(int a, int b, int c) to calculate the total.
//3. Use float average_marks(int total) to calculate the average.
//4. Display the total and average.


#include <stdio.h>
#ifndef STUDENT_H
#define STUDENT_H

int total(int n,int m,int e);
float average(int t);

#endif
