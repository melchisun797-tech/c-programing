//Write a program that:
//Takes a string from the user.
//Creates a pointer to the string.
//Uses *(p+i) to print every character.
//Don't use name[i] for printing.


#include <stdio.h>
int main() 
{
    char c[6];
    printf("enter a string");
    scanf("%s",c);
    char *p=c;
    for(int i=0;i<=5;i++)
        {
            printf("%c",*(p+i));
        }
    return 0;
}
