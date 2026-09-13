//Take a word from the user and print it in reverse.


#include <stdio.h>
int main() 
{
    char n[40];
    int count=0;
    int c=0;
    printf("enter your name");
    scanf("%s",n);
    while(n[count]!='\0')
        {
            count++;
        }
    for(int i=count-1;i>=0;i--)
        {
            printf("%c",n[i]);       
        }
            
}
