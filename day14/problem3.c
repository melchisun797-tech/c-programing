//Take a string and print it in reverse using pointer:


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
    for(int i=(a-1);i>=0;i--)
        {
            printf("%c",*(p+i));
        }
    return 0;
}
