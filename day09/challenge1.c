//Write a program that:
//Takes a word from the user.
//Finds its length.
//Counts the number of vowels.
//Counts the number of consonants.
//Prints the reverse of the word.


#include <stdio.h>
int main() 
{
    char n[40];
    int count=0;
    int c=0;
    int s=0;
    printf("enter your name");
    scanf("%s",n);
    while(n[count]!='\0')
        {
               if(n[count]=='a'||n[count]=='e'||n[count]=='i'||n[count]=='o'||n[count]=='u')      
               {
                c++; 
               } 
            else
            {
                s++;
            }
            count++;
        }
            for(int i=count-1;i>=0;i--)
            {
            printf("%c",n[i]);       
            }
     printf("the no of vowels=%d",c);
     printf("the no of consonants=%d",s);
    return 0;
}
