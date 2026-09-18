//Write a program that:
//Takes a string.
//Creates char *p = c.
//Finds the length using *(p+i).
//Do not use strlen().
//Print the length.


#include <stdio.h>
int main() 
{
    char c[50];
    int a=0;
    printf("enter a string");
    scanf("%s",c);
    char *p=c;
    for(int i=0;*(p+i)!='\0';i++)
        {
            a++;
        }
               printf("the length of string %d",a);

    return 0;
}
