//Create a C program that:
//1. Defines four functions: add(), subtract(), multiply(), and divide().
//2. Each function accepts two integers and returns a float result.
//3. Declares a function pointer compatible with these functions.
//4. Asks the user to enter two numbers.
//5. Uses the function pointer to call each function.
//6. Prints all four results.
//7. Checks whether the second number is zero before performing division.


#include <stdio.h>
float add(float n,float m)
{
    return n+m;
}
float sub(float n,float m)
{
    return n-m;
}
float mul(float n,float m)
{
    return n*m;
}
void div(float n,float m)
{
   if(m!=0)
   {
        float u=n/m;
        printf("division=%.2f\n",u);
    }
    else
    {
        printf("error");
    }
}
int main() 
{
    float a,b;
    printf("enter 2 no\n");
    scanf("%f%f",&a,&b);
    float x=add(a,b);
    float y=sub(a,b);    
    float z=mul(a,b);
    div(a,b);
    printf("addition=%.2f\n",x);
    printf("subtraction=%.2f\n",y);   
    printf("multiplication=%.2f\n",z);
    return 0;
}
