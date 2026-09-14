//Write a program that:
//Takes a word from the user into n.
//Creates another character array copy.
//Uses strcpy() to copy n into copy.
//Prints both strings.


#include <stdio.h>
#include <string.h>
int main() 
{
    char n[50];
    printf("enter your name");
    scanf("%s",n);
    char copy[50];
    strcpy(copy,n);
    printf("%s",n);
    printf("%s",copy); 
    return 0;
}
