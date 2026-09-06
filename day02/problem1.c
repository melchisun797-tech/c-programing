//problem 1
//Write a C program that asks the user for two integers and prints:
//Sum
//Difference
//Product
//Quotient
//Remainder


#include <stdio.h>
int main()
    {
        int a;
        int b;
        printf("give me 2 no");
        scanf("%d",&a);
        scanf("%d",&b); 
        printf("the sum is %d\n",a+b);
        printf("the diff is %d\n",a-b);
        printf("the prod is %d\n",a*b);
        printf("the div is %f\n",(float)a/b);
        printf("the rema is %d\n",a%b);
        return 0;
    }
