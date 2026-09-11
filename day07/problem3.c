//Create a function called square() that:
//Takes one integer as a parameter.
//Returns its square.
//main() should store the returned value and print it.


#include <stdio.h>
int a1;
int s;
int square(int a)
{
    a1=a*a;
    return a1;
}
int main() 
{
    printf("enter a no");
    scanf("%d", &s);
    int r=square(s);
    printf("the square=%d",r);
    return 0;
}
