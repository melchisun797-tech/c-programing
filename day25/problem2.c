//Write a program that:
//Takes a string from the user.
//Creates a function:
//int countVowels(char str[])
//The function counts the vowels (a, e, i, o, u).
//Returns the vowel count.
//Print the result in main().


#include <stdio.h>
int cv(char n[],int j)
{
    int c=0;
    for(int i=0;i<j;i++)
        {
    if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')   
    {
        c++;
    }
        }
    return c;
}

int main()
{
    int j;
    printf("enter no of elements");
    scanf("%d",&j);
    char n[j];
    printf("enter elements a string");
    
    scanf("%s",n);

    int l=cv(n,j);
    printf("the no of vowels%d",l);
    return 0;
}
