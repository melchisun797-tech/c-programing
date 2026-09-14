//Write a program that:

//Takes two strings from the user.
//Checks whether they are the same using strcmp().
//If they are different, combine them using strcat().
//Print the combined string.
//Print the length of the combined string using strlen().


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
    if(strcmp(m,n)==0)
    {
        printf("the strings are same");   
    }
    else
    {
        strcat(n,m);
        printf("the combined string=%s\n",n);  
    }
    printf("the length of the combined string is %d\n",strlen(n));
    return 0;
}

    
