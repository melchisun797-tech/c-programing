//Now create the same three-file structure for a calculator.
//Your program must have these functions:
//add(a, b) — return the sum.
//subtract(a, b) — return the difference.
//multiply(a, b) — return the product.
//Use calculator.h, calculator.c, and main.c. Include a header guard in calculator.h.

#include <stdio.h>
#ifndef CALCULATOR_H
#define CALCULATOR_H

int add(int n,int m);
int subtract(int n,int m);
int multiply(int n,int m);

#endif
