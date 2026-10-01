//Write a function:
//int countVowels(char str[])
//It should:
//Receive a string.
//Count a, e, i, o, u.
//Return the number of vowels.
//Print the result in main().


#include <stdio.h>
int countv(char str[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
        {   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            c++;
        }
        }
    return c;
}
int main()
{
    int n=0;;
    char str[50];
    printf("the string is");
    scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            n++;
        }
        else
        {
            n++;
        }
}
        int l=countv(str,n);
    printf("the no of vowels %d",l);
}
