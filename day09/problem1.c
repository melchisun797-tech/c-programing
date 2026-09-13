//Write a C program that:
//Creates a character array capable of storing a name.
//Takes the user's name as input.
//Prints:
//Hello, <name>


#include <stdio.h>
int main() 
{
    char n[40];
    printf("enter your name");
    scanf("%s",n);
    printf("hello,%s",n);   
    return 0;
}
