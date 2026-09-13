//Take a word from the user and count how many vowels it contains.


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
    for(int i=0;i<=count;i++)
        {
            if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
            {
                c++;
            }
        }
    printf("the no of vowel %d",c);
}
