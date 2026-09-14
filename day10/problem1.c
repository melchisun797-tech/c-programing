//Write a program that:
//Takes a word from the user.
//Uses strlen() to find its length.
//Prints the length.


#include <stdio.h>
#include <string.h>
int main() 
{
    char n[50];
    printf("enter your name");
    scanf("%s",n);
    printf("the no of letters=%d",strlen(n));
    return 0;
}
