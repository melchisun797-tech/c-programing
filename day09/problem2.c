//Take a name from the user and find its length.


#include <stdio.h>
int main() 
{
    char n[40];
    int count=0;
    printf("enter your name");
    scanf("%s",n);
    while(n[count]!='\0')
        {
            count++;
        }
    printf("the length=%d",count);   
    return 0;
}
