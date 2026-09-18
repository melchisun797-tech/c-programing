//Write a program that:
//Takes two strings.
//Creates a pointer for each string.
//Compares the strings using *(p+i).
//Do not use strcmp().
//Print whether they are equal or different.


#include <stdio.h>
int main() 
{
    char c[50];
    int a=0;
    printf("enter a string");
    scanf("%s",c);
    char b[50];
    printf("enter a string");
    scanf("%s",b);
    char *p1=c;
    char *p2=b;
    int i=0;
    for(i=0;*(p1+i)!='\0'&&*(p2+i)!='\0';i++)
        {
            if(*(p1+i)!=*(p2+i)) 
            {
                a++;
            }
        }
    if(*(p1+i) != '\0' || *(p2+i) != '\0')
    {
        a++;
    }
   if(a==0)
   {
        printf("the string same");
   }
    else
   {
        printf("the string not same");
   }
    return 0;
}
