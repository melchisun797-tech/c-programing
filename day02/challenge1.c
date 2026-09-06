//challenge 1
//a simple calculator
//first number
//second number
//Then output:
//Sum
//Difference
//Product
//Quotient
//Remainder


#include <stdio.h>
int main() 
{
    int n;
    int m;
    printf("First No=");
    scanf("%d",&n);
    printf("Second No="); 
    scanf("%d",&m);
    printf("------>CALCULATOR<------\n"); 
    printf("First No= %d\n",n);
    printf("Second No=%d\n",m); 
    printf("sum=%d\n",n+m);
    printf("difference=%d\n",n-m);
    printf("multiplication=%d\n",n*m);
    printf("division=%f\n",(float)n/m);
    printf("------------------------");
    return 0;
}
