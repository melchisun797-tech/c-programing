//Write a program that:
//Takes two words from the user.
//Compares them using strcmp().
//Prints:
//Strings are same
//OR Strings are different


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
    if(strcmp(n,m)==0)
    {
        printf("the string are same");
    }
    else
    {
        printf("the string are different");
    }
} 
