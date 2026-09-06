//problem 3
//Write a program that asks the user for an amount of money and calculates:
//Amount
//10% discount
//Final amount after discount


#include <stdio.h>
int main() 
{
    float a;
    printf("enter a amount");
    scanf("%f",&a);
    float d=0.1;
    float da=a*d;
    printf("the discounted amount is %1.f",da);
    return 0;
}
