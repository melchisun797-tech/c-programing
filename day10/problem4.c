//Write a program that:
//Takes a first name.
//Takes a last name.
//Joins them using strcat().
//Prints the full name.


#include <stdio.h>
#include <string.h>
int main() 
{
    char n[50];
    printf("enter your string");
    scanf("%s",n);
    char m[50];
    printf("enter your string");
    scanf("%s",m);
    strcat(n, m);
    printf("the combined string=%s",n);
} 
